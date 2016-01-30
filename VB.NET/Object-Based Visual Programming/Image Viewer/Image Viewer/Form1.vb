Public Class Form1

    Private Sub OpenToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles OpenToolStripMenuItem.Click
        Dim strfileName As String
        With ofdOpenFile
            .Filter = "JPEG images (*.jpg) | *.jpg | Bitmaps (*.bmp) | *.bmp | GIF images (*.gif) | *.gif | PNG images (*.png) | *.png"
            .FileName = ""
            .Title = "Select an image to open."

            If ofdOpenFile.ShowDialog() = Windows.Forms.DialogResult.OK Then
                strfileName = ofdOpenFile.FileName
                picImage.Image = Image.FromFile(strfileName)
            Else
                MessageBox.Show("Please select a file.")
            End If
        End With
    End Sub
End Class
