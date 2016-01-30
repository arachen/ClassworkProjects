<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class IndividualPlan
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
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.radModel100 = New System.Windows.Forms.RadioButton()
        Me.radModel110 = New System.Windows.Forms.RadioButton()
        Me.radModel200 = New System.Windows.Forms.RadioButton()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.rad800MM = New System.Windows.Forms.RadioButton()
        Me.rad1500MM = New System.Windows.Forms.RadioButton()
        Me.radUnlimited = New System.Windows.Forms.RadioButton()
        Me.GroupBox3 = New System.Windows.Forms.GroupBox()
        Me.chkEmail = New System.Windows.Forms.CheckBox()
        Me.chkTextMessaging = New System.Windows.Forms.CheckBox()
        Me.GroupBox4 = New System.Windows.Forms.GroupBox()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.Label6 = New System.Windows.Forms.Label()
        Me.lblPhoneSubtotal = New System.Windows.Forms.Label()
        Me.lblTax = New System.Windows.Forms.Label()
        Me.lblPhoneTotal = New System.Windows.Forms.Label()
        Me.lblOptions = New System.Windows.Forms.Label()
        Me.lblPackageCharge = New System.Windows.Forms.Label()
        Me.lblTotalMonthlyCharge = New System.Windows.Forms.Label()
        Me.btnCalculate = New System.Windows.Forms.Button()
        Me.btnClose = New System.Windows.Forms.Button()
        Me.GroupBox1.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.GroupBox3.SuspendLayout()
        Me.GroupBox4.SuspendLayout()
        Me.SuspendLayout()
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.radModel200)
        Me.GroupBox1.Controls.Add(Me.radModel110)
        Me.GroupBox1.Controls.Add(Me.radModel100)
        Me.GroupBox1.Location = New System.Drawing.Point(12, 12)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(123, 89)
        Me.GroupBox1.TabIndex = 0
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Select a Phone"
        '
        'radModel100
        '
        Me.radModel100.AutoSize = True
        Me.radModel100.Location = New System.Drawing.Point(6, 16)
        Me.radModel100.Name = "radModel100"
        Me.radModel100.Size = New System.Drawing.Size(75, 17)
        Me.radModel100.TabIndex = 0
        Me.radModel100.TabStop = True
        Me.radModel100.Text = "Model 100"
        Me.radModel100.UseVisualStyleBackColor = True
        '
        'radModel110
        '
        Me.radModel110.AutoSize = True
        Me.radModel110.Location = New System.Drawing.Point(6, 39)
        Me.radModel110.Name = "radModel110"
        Me.radModel110.Size = New System.Drawing.Size(75, 17)
        Me.radModel110.TabIndex = 1
        Me.radModel110.TabStop = True
        Me.radModel110.Text = "Model 110"
        Me.radModel110.UseVisualStyleBackColor = True
        '
        'radModel200
        '
        Me.radModel200.AutoSize = True
        Me.radModel200.Location = New System.Drawing.Point(6, 62)
        Me.radModel200.Name = "radModel200"
        Me.radModel200.Size = New System.Drawing.Size(75, 17)
        Me.radModel200.TabIndex = 2
        Me.radModel200.TabStop = True
        Me.radModel200.Text = "Model 200"
        Me.radModel200.UseVisualStyleBackColor = True
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.radUnlimited)
        Me.GroupBox2.Controls.Add(Me.rad1500MM)
        Me.GroupBox2.Controls.Add(Me.rad800MM)
        Me.GroupBox2.Location = New System.Drawing.Point(141, 12)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(249, 89)
        Me.GroupBox2.TabIndex = 1
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Select a Package"
        '
        'rad800MM
        '
        Me.rad800MM.AutoSize = True
        Me.rad800MM.Location = New System.Drawing.Point(6, 16)
        Me.rad800MM.Name = "rad800MM"
        Me.rad800MM.Size = New System.Drawing.Size(118, 17)
        Me.rad800MM.TabIndex = 0
        Me.rad800MM.TabStop = True
        Me.rad800MM.Text = "800 Minutes/Month"
        Me.rad800MM.UseVisualStyleBackColor = True
        '
        'rad1500MM
        '
        Me.rad1500MM.AutoSize = True
        Me.rad1500MM.Location = New System.Drawing.Point(6, 39)
        Me.rad1500MM.Name = "rad1500MM"
        Me.rad1500MM.Size = New System.Drawing.Size(124, 17)
        Me.rad1500MM.TabIndex = 1
        Me.rad1500MM.TabStop = True
        Me.rad1500MM.Text = "1500 Minutes/Month"
        Me.rad1500MM.UseVisualStyleBackColor = True
        '
        'radUnlimited
        '
        Me.radUnlimited.AutoSize = True
        Me.radUnlimited.Location = New System.Drawing.Point(6, 62)
        Me.radUnlimited.Name = "radUnlimited"
        Me.radUnlimited.Size = New System.Drawing.Size(108, 17)
        Me.radUnlimited.TabIndex = 2
        Me.radUnlimited.TabStop = True
        Me.radUnlimited.Text = "Unlimited Minutes"
        Me.radUnlimited.UseVisualStyleBackColor = True
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.chkTextMessaging)
        Me.GroupBox3.Controls.Add(Me.chkEmail)
        Me.GroupBox3.Location = New System.Drawing.Point(12, 107)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(123, 93)
        Me.GroupBox3.TabIndex = 2
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Select Options"
        '
        'chkEmail
        '
        Me.chkEmail.AutoSize = True
        Me.chkEmail.Location = New System.Drawing.Point(20, 30)
        Me.chkEmail.Name = "chkEmail"
        Me.chkEmail.Size = New System.Drawing.Size(51, 17)
        Me.chkEmail.TabIndex = 0
        Me.chkEmail.Text = "Email"
        Me.chkEmail.UseVisualStyleBackColor = True
        '
        'chkTextMessaging
        '
        Me.chkTextMessaging.AutoSize = True
        Me.chkTextMessaging.Location = New System.Drawing.Point(20, 53)
        Me.chkTextMessaging.Name = "chkTextMessaging"
        Me.chkTextMessaging.Size = New System.Drawing.Size(101, 17)
        Me.chkTextMessaging.TabIndex = 1
        Me.chkTextMessaging.Text = "Text Messaging"
        Me.chkTextMessaging.UseVisualStyleBackColor = True
        '
        'GroupBox4
        '
        Me.GroupBox4.Controls.Add(Me.lblTotalMonthlyCharge)
        Me.GroupBox4.Controls.Add(Me.lblPackageCharge)
        Me.GroupBox4.Controls.Add(Me.lblOptions)
        Me.GroupBox4.Controls.Add(Me.lblPhoneTotal)
        Me.GroupBox4.Controls.Add(Me.lblTax)
        Me.GroupBox4.Controls.Add(Me.lblPhoneSubtotal)
        Me.GroupBox4.Controls.Add(Me.Label6)
        Me.GroupBox4.Controls.Add(Me.Label5)
        Me.GroupBox4.Controls.Add(Me.Label4)
        Me.GroupBox4.Controls.Add(Me.Label3)
        Me.GroupBox4.Controls.Add(Me.Label2)
        Me.GroupBox4.Controls.Add(Me.Label1)
        Me.GroupBox4.Location = New System.Drawing.Point(141, 107)
        Me.GroupBox4.Name = "GroupBox4"
        Me.GroupBox4.Size = New System.Drawing.Size(249, 152)
        Me.GroupBox4.TabIndex = 3
        Me.GroupBox4.TabStop = False
        Me.GroupBox4.Text = "Totals"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(41, 16)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(83, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Phone Subtotal:"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(96, 38)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(28, 13)
        Me.Label2.TabIndex = 1
        Me.Label2.Text = "Tax:"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(56, 60)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(68, 13)
        Me.Label3.TabIndex = 2
        Me.Label3.Text = "Phone Total:"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(78, 82)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(46, 13)
        Me.Label4.TabIndex = 3
        Me.Label4.Text = "Options:"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(34, 104)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(90, 13)
        Me.Label5.TabIndex = 4
        Me.Label5.Text = "Package Charge:"
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Location = New System.Drawing.Point(13, 126)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(111, 13)
        Me.Label6.TabIndex = 5
        Me.Label6.Text = "Total Monthly Charge:"
        '
        'lblPhoneSubtotal
        '
        Me.lblPhoneSubtotal.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblPhoneSubtotal.Location = New System.Drawing.Point(130, 15)
        Me.lblPhoneSubtotal.Name = "lblPhoneSubtotal"
        Me.lblPhoneSubtotal.Size = New System.Drawing.Size(100, 20)
        Me.lblPhoneSubtotal.TabIndex = 6
        '
        'lblTax
        '
        Me.lblTax.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblTax.Location = New System.Drawing.Point(130, 37)
        Me.lblTax.Name = "lblTax"
        Me.lblTax.Size = New System.Drawing.Size(100, 20)
        Me.lblTax.TabIndex = 7
        '
        'lblPhoneTotal
        '
        Me.lblPhoneTotal.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblPhoneTotal.Location = New System.Drawing.Point(130, 59)
        Me.lblPhoneTotal.Name = "lblPhoneTotal"
        Me.lblPhoneTotal.Size = New System.Drawing.Size(100, 20)
        Me.lblPhoneTotal.TabIndex = 8
        '
        'lblOptions
        '
        Me.lblOptions.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblOptions.Location = New System.Drawing.Point(130, 81)
        Me.lblOptions.Name = "lblOptions"
        Me.lblOptions.Size = New System.Drawing.Size(100, 20)
        Me.lblOptions.TabIndex = 9
        '
        'lblPackageCharge
        '
        Me.lblPackageCharge.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblPackageCharge.Location = New System.Drawing.Point(130, 103)
        Me.lblPackageCharge.Name = "lblPackageCharge"
        Me.lblPackageCharge.Size = New System.Drawing.Size(100, 20)
        Me.lblPackageCharge.TabIndex = 10
        '
        'lblTotalMonthlyCharge
        '
        Me.lblTotalMonthlyCharge.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D
        Me.lblTotalMonthlyCharge.Location = New System.Drawing.Point(130, 125)
        Me.lblTotalMonthlyCharge.Name = "lblTotalMonthlyCharge"
        Me.lblTotalMonthlyCharge.Size = New System.Drawing.Size(100, 20)
        Me.lblTotalMonthlyCharge.TabIndex = 11
        '
        'btnCalculate
        '
        Me.btnCalculate.Location = New System.Drawing.Point(32, 207)
        Me.btnCalculate.Name = "btnCalculate"
        Me.btnCalculate.Size = New System.Drawing.Size(75, 23)
        Me.btnCalculate.TabIndex = 4
        Me.btnCalculate.Text = "Calculate"
        Me.btnCalculate.UseVisualStyleBackColor = True
        '
        'btnClose
        '
        Me.btnClose.Location = New System.Drawing.Point(32, 235)
        Me.btnClose.Name = "btnClose"
        Me.btnClose.Size = New System.Drawing.Size(75, 23)
        Me.btnClose.TabIndex = 5
        Me.btnClose.Text = "Close"
        Me.btnClose.UseVisualStyleBackColor = True
        '
        'IndividualPlan
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(402, 270)
        Me.Controls.Add(Me.btnClose)
        Me.Controls.Add(Me.btnCalculate)
        Me.Controls.Add(Me.GroupBox4)
        Me.Controls.Add(Me.GroupBox3)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Name = "IndividualPlan"
        Me.Text = "IndividualPlan"
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        Me.GroupBox2.ResumeLayout(False)
        Me.GroupBox2.PerformLayout()
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.GroupBox4.ResumeLayout(False)
        Me.GroupBox4.PerformLayout()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents radModel200 As System.Windows.Forms.RadioButton
    Friend WithEvents radModel110 As System.Windows.Forms.RadioButton
    Friend WithEvents radModel100 As System.Windows.Forms.RadioButton
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents radUnlimited As System.Windows.Forms.RadioButton
    Friend WithEvents rad1500MM As System.Windows.Forms.RadioButton
    Friend WithEvents rad800MM As System.Windows.Forms.RadioButton
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents chkTextMessaging As System.Windows.Forms.CheckBox
    Friend WithEvents chkEmail As System.Windows.Forms.CheckBox
    Friend WithEvents GroupBox4 As System.Windows.Forms.GroupBox
    Friend WithEvents lblTotalMonthlyCharge As System.Windows.Forms.Label
    Friend WithEvents lblPackageCharge As System.Windows.Forms.Label
    Friend WithEvents lblOptions As System.Windows.Forms.Label
    Friend WithEvents lblPhoneTotal As System.Windows.Forms.Label
    Friend WithEvents lblTax As System.Windows.Forms.Label
    Friend WithEvents lblPhoneSubtotal As System.Windows.Forms.Label
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents btnCalculate As System.Windows.Forms.Button
    Friend WithEvents btnClose As System.Windows.Forms.Button
End Class
