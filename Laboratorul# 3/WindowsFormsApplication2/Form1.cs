using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication2
{
    public partial class Form1 : Form
    {
        Double resulltValue = 0;
        String operationPerformend="";
        bool isOperationPerformed = false;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button_click(object sender, EventArgs e)
        {
            if ((textBox_Result.Text == "0") || (isOperationPerformed)) 
                textBox_Result.Clear();
            isOperationPerformed = false;
            Button button=(Button)sender;
            if (button.Text==".")
            {
                if(!textBox_Result.Text.Contains("."))
                    textBox_Result.Text = textBox_Result.Text + button.Text;
            }else
            textBox_Result.Text = textBox_Result.Text + button.Text;
        }

        private void operator_click(object sender, EventArgs e)
        {
            Button button = (Button)sender;

            if (resulltValue != 0)
            {
                button18.PerformClick();
                operationPerformend = button.Text;
                labelCurrentOperation.Text = resulltValue + "" + operationPerformend;
                isOperationPerformed = true;
            }
            else
            {



                operationPerformend = button.Text;
                resulltValue = Double.Parse(textBox_Result.Text);
                labelCurrentOperation.Text = resulltValue + "" + operationPerformend;
                isOperationPerformed = true;
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            textBox_Result.Text = "0";
        }

        private void button8_Click(object sender, EventArgs e)
        {
            textBox_Result.Text = "0";
            resulltValue = 0;
        }

        private void button18_Click(object sender, EventArgs e)
        {
            switch(operationPerformend)
            {
                case"+":
                    textBox_Result.Text = (resulltValue + Double.Parse(textBox_Result.Text)).ToString();
                    break;
                case "-":
                    textBox_Result.Text = (resulltValue - Double.Parse(textBox_Result.Text)).ToString();
                    break;
                case "*":
                    textBox_Result.Text = (resulltValue * Double.Parse(textBox_Result.Text)).ToString();
                    break;
                case "/":
                    textBox_Result.Text = (resulltValue / Double.Parse(textBox_Result.Text)).ToString();
                    break;
                case "x^2":
                    textBox_Result.Text = (resulltValue * resulltValue).ToString();
                    break;
                default: break;
            }
            resulltValue = Double.Parse(textBox_Result.Text);
            labelCurrentOperation.Text = "";
        }

        private void button3_Click(object sender, EventArgs e)
        {

        }

        private void button17_Click(object sender, EventArgs e)
        {
                   if (textBox_Result.Text != "")
                        if (textBox_Result.Text[0] == '-')
                            textBox_Result.Text = textBox_Result.Text.Remove(0, 1);
                       else textBox_Result.Text = '-' + textBox_Result.Text;
        }

        private void button21_Click(object sender, EventArgs e)
        {
            //textBox_Result.Text = Sqrt((textBox_Result.Text) + textBox_Result.Text).ToString();
            //textBox_Result.Text = Sqrt(resulltValue).ToString();
        }

        private void textBox_Result_TextChanged(object sender, EventArgs e)
        {

        }
       
    }
}
