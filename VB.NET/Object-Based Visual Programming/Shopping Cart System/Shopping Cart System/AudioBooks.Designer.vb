<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class AudioBooks
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
        Me.Label1 = New System.Windows.Forms.Label()
        Me.lstAudioBooks = New System.Windows.Forms.ListBox()
        Me.btnAddtoCart = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(37, 9)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(110, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Select an Audio Book"
        '
        'lstAudioBooks
        '
        Me.lstAudioBooks.FormattingEnabled = True
        Me.lstAudioBooks.Items.AddRange(New Object() {"Learn Calculus in One Day", "The History of Scotland", "The Science of Body Language", "Relaxation Techniques"})
        Me.lstAudioBooks.Location = New System.Drawing.Point(40, 25)
        Me.lstAudioBooks.Name = "lstAudioBooks"
        Me.lstAudioBooks.Size = New System.Drawing.Size(266, 95)
        Me.lstAudioBooks.TabIndex = 1
        '
        'btnAddtoCart
        '
        Me.btnAddtoCart.Location = New System.Drawing.Point(40, 144)
        Me.btnAddtoCart.Name = "btnAddtoCart"
        Me.btnAddtoCart.Size = New System.Drawing.Size(75, 23)
        Me.btnAddtoCart.TabIndex = 2
        Me.btnAddtoCart.Text = "Add to Cart"
        Me.btnAddtoCart.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Location = New System.Drawing.Point(210, 144)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(75, 23)
        Me.btnClose.TabIndex = 3
        Me.btnClose.Text = "Close"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'AudioBooks
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(345, 188)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnAddtoCart)
        Me.Controls.Add(Me.lstAudioBooks)
        Me.Controls.Add(Me.Label1)
        Me.Name = "AudioBooks"
        Me.Text = "Audio Books"
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents lstAudioBooks As System.Windows.Forms.ListBox
    Friend WithEvents btnAddtoCart As System.Windows.Forms.Button
    Friend WithEvents btnClose As System.Windows.Forms.Button
End Class
