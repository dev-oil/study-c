using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Collections.Generic;
using System.IO;
using AxWMPLib;

namespace project_retroMusicPlayer
{
    public partial class Form1 : Form
    {
        private List<string> filePaths = new List<string>();

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // 전체 폼 스타일
            this.BackColor = Color.Black;
            this.ForeColor = Color.White;
            this.Font = new Font("맑은 고딕", 10, FontStyle.Regular);
            this.Text = "🎶 Retro Music Player";

            // 버튼 스타일 모두 적용
            foreach (var ctrl in this.Controls)
            {
                if (ctrl is Button btn)
                {
                    btn.FlatStyle = FlatStyle.Flat;
                    btn.BackColor = Color.Black;
                    btn.ForeColor = Color.White;
                    btn.Font = new Font("맑은 고딕", 9, FontStyle.Bold);
                    btn.FlatAppearance.BorderColor = Color.White;
                    btn.FlatAppearance.BorderSize = 1;
                }
            }

            // 리스트박스
            listBoxSongs.BackColor = Color.Black;
            listBoxSongs.ForeColor = Color.White;
            listBoxSongs.Font = new Font("Segoe UI", 9, FontStyle.Regular);
            listBoxSongs.BorderStyle = BorderStyle.FixedSingle;

            // 볼륨 슬라이더
            trackBarVolume.BackColor = Color.Black;
            trackBarVolume.TickStyle = TickStyle.None;

            // 재생 시간
            labelTime.ForeColor = Color.White;
            labelTime.Font = new Font("Consolas", 10, FontStyle.Bold);

            // 타이머 시작
            timerPlayback.Start();

            // 볼륨 초기화
            trackBarVolume.Value = 50;
            mediaPlayer.settings.volume = 50;
        }
        private void btnUpload_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Multiselect = true;
            openFileDialog.Filter = "MP3 파일 (*.mp3)|*.mp3|모든 파일 (*.*)|*.*";

            if (openFileDialog.ShowDialog() == DialogResult.OK)
            {
                foreach (string file in openFileDialog.FileNames)
                {
                    filePaths.Add(file);
                    listBoxSongs.Items.Add(Path.GetFileName(file));
                }
            }
        }

        private void btnPlay_Click(object sender, EventArgs e)
        {
            if (listBoxSongs.Items.Count == 0)
                return;

            // 아무 것도 선택 안 됐을 경우 첫 곡 자동 선택
            if (listBoxSongs.SelectedIndex == -1)
            {
                listBoxSongs.SelectedIndex = 0;
            }

            string file = filePaths[listBoxSongs.SelectedIndex];

            // Pause 상태면 URL을 다시 지정하지 말고 resume만
            if (mediaPlayer.playState == WMPLib.WMPPlayState.wmppsPaused)
            {
                mediaPlayer.Ctlcontrols.play();
            }
            else
            {
                mediaPlayer.URL = file;
                mediaPlayer.Ctlcontrols.play();
            }
        }




        private void btnPause_Click(object sender, EventArgs e)
        {
            mediaPlayer.Ctlcontrols.pause();
        }

        private void btnStop_Click(object sender, EventArgs e)
        {
            mediaPlayer.Ctlcontrols.stop();
        }

        private void btnNext_Click(object sender, EventArgs e)
        {
            int currentIndex = listBoxSongs.SelectedIndex;

            if (listBoxSongs.Items.Count == 0)
                return; // 곡이 없으면 무시

            // 다음 곡 인덱스 계산 (마지막이면 0으로)
            int nextIndex = (currentIndex + 1) % listBoxSongs.Items.Count;

            // 리스트박스에서도 선택 변경
            listBoxSongs.SelectedIndex = nextIndex;

            // 곡 재생
            string nextFile = filePaths[nextIndex];
            mediaPlayer.URL = nextFile;
            mediaPlayer.Ctlcontrols.play();
        }

        private void trackBarVolume_Scroll(object sender, EventArgs e)
        {
            mediaPlayer.settings.volume = trackBarVolume.Value;
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }


        private void timerPlayback_Tick(object sender, EventArgs e)
        {
            // 현재 시간 (초 단위 → 분:초 문자열로 포맷)
            double current = mediaPlayer.Ctlcontrols.currentPosition;
            double total = mediaPlayer.currentMedia?.duration ?? 0;

            string FormatTime(double time)
            {
                int minutes = (int)time / 60;
                int seconds = (int)time % 60;
                return $"{minutes:D2}:{seconds:D2}";
            }

            labelTime.Text = $"{FormatTime(current)} / {FormatTime(total)}";
        }

        private void mediaPlayer_PlayStateChange(object sender, AxWMPLib._WMPOCXEvents_PlayStateChangeEvent e)
        {
            // 8 = MediaEnded
            if (e.newState == 8)
            {
                btnNext.PerformClick(); // 다음 곡 자동 재생
            }
        }

    }
}