<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Form1
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Form1))
        Me.Label1 = New System.Windows.Forms.Label()
        Me.picRock = New System.Windows.Forms.PictureBox()
        Me.picPaper = New System.Windows.Forms.PictureBox()
        Me.picScissors = New System.Windows.Forms.PictureBox()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.lblComputerChoice = New System.Windows.Forms.Label()
        Me.btnClear = New System.Windows.Forms.Button()
        Me.btnExit = New System.Windows.Forms.Button()
        Me.picComputer = New System.Windows.Forms.PictureBox()
        CType(Me.picRock, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picPaper, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picScissors, System.ComponentModel.ISupportInitialize).BeginInit()
        CType(Me.picComputer, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(12, 9)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(132, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Select your choice to play:"
        '
        'picRock
        '
        Me.picRock.Image = CType(resources.GetObject("picRock.Image"), System.Drawing.Image)
        Me.picRock.Location = New System.Drawing.Point(12, 39)
        Me.picRock.Name = "picRock"
        Me.picRock.Size = New System.Drawing.Size(145, 143)
        Me.picRock.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picRock.TabIndex = 1
        Me.picRock.TabStop = False
        '
        'picPaper
        '
        Me.picPaper.Image = CType(resources.GetObject("picPaper.Image"), System.Drawing.Image)
        Me.picPaper.Location = New System.Drawing.Point(163, 39)
        Me.picPaper.Name = "picPaper"
        Me.picPaper.Size = New System.Drawing.Size(145, 143)
        Me.picPaper.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picPaper.TabIndex = 2
        Me.picPaper.TabStop = False
        '
        'picScissors
        '
        Me.picScissors.Image = CType(resources.GetObject("picScissors.Image"), System.Drawing.Image)
        Me.picScissors.Location = New System.Drawing.Point(314, 39)
        Me.picScissors.Name = "picScissors"
        Me.picScissors.Size = New System.Drawing.Size(145, 143)
        Me.picScissors.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picScissors.TabIndex = 3
        Me.picScissors.TabStop = False
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(12, 204)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(97, 13)
        Me.Label2.TabIndex = 4
        Me.Label2.Text = "Computer's choice:"
        '
        'lblComputerChoice
        '
        Me.lblComputerChoice.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblComputerChoice.Location = New System.Drawing.Point(15, 339)
        Me.lblComputerChoice.Name = "lblComputerChoice"
        Me.lblComputerChoice.Size = New System.Drawing.Size(447, 70)
        Me.lblComputerChoice.TabIndex = 5
        '
        'btnClear
        '
        Me.btnClear.Location = New System.Drawing.Point(124, 430)
        Me.btnClear.Name = "btnClear"
        Me.btnClear.Size = New System.Drawing.Size(75, 23)
        Me.btnClear.TabIndex = 6
        Me.btnClear.Text = "Clear"
        Me.btnClear.UseVisualStyleBackColor = True
        '
        'btnExit
        '
        Me.btnExit.Location = New System.Drawing.Point(284, 430)
        Me.btnExit.Name = "btnExit"
        Me.btnExit.Size = New System.Drawing.Size(75, 23)
        Me.btnExit.TabIndex = 7
        Me.btnExit.Text = "Exit"
        Me.btnExit.UseVisualStyleBackColor = True
        '
        'picComputer
        '
        Me.picComputer.Location = New System.Drawing.Point(124, 188)
        Me.picComputer.Name = "picComputer"
        Me.picComputer.Size = New System.Drawing.Size(145, 143)
        Me.picComputer.SizeMode = System.Windows.Forms.PictureBoxSizeMode.StretchImage
        Me.picComputer.TabIndex = 8
        Me.picComputer.TabStop = False
        '
        'Form1
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(471, 465)
        Me.Controls.Add(Me.picComputer)
        Me.Controls.Add(Me.btnExit)
        Me.Controls.Add(Me.btnClear)
        Me.Controls.Add(Me.lblComputerChoice)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.picScissors)
        Me.Controls.Add(Me.picPaper)
        Me.Controls.Add(Me.picRock)
        Me.Controls.Add(Me.Label1)
        Me.Name = "Form1"
        Me.Text = "Rock, Paper, Scissors"
        CType(Me.picRock, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picPaper, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picScissors, System.ComponentModel.ISupportInitialize).EndInit()
        CType(Me.picComputer, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents picRock As System.Windows.Forms.PictureBox
    Friend WithEvents picPaper As System.Windows.Forms.PictureBox
    Friend WithEvents picScissors As System.Windows.Forms.PictureBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents lblComputerChoice As System.Windows.Forms.Label
    Friend WithEvents btnClear As System.Windows.Forms.Button
    Friend WithEvents btnExit As System.Windows.Forms.Button
    Friend WithEvents picComputer As System.Windows.Forms.PictureBox

End Class
