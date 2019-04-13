package MyClasses;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class TheatreRevenue  extends JFrame {
    /**
     * 
     */
    final double percent = .20;
    double adultCost;
    private JTextField label2;
    private JTextField label4;
    private JTextField label6;
    private JTextField label8;
    private JButton button1;
    private final int WINDOW_WIDTH = 400;
    private final int WINDOW_HEIGHT = 200;
    /**
     * @param args
     */
    public TheatreRevenue(){
        setTitle("Theatre Revenue");
        setSize(WINDOW_WIDTH, WINDOW_HEIGHT);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new GridLayout(5,2));
        button1 = new JButton("Calculate Revenue");
        button1.addActionListener(new CalcButtonListener());
        JLabel label1 = new JLabel("Enter the price of one adult ticket : ");
        JTextField label2 = new JTextField(10);
        JLabel label3 = new JLabel("Enter the number of adult tickets sold : ");
        JTextField label4 = new JTextField(10);
        JLabel label5 = new JLabel("Enter the price of one child ticket : ");
        JTextField label6 = new JTextField(10);
        JLabel label7 = new JLabel("Enter the number of child tickets sold : ");
        JTextField label8 = new JTextField(10);
        JPanel panel1 = new JPanel();
        JPanel panel2 = new JPanel();
        JPanel panel3 = new JPanel();
        JPanel panel4 = new JPanel();
        JPanel panel5 = new JPanel();
        JPanel panel6 = new JPanel();
        JPanel panel7 = new JPanel();
        JPanel panel8 = new JPanel();
        JPanel panel9 = new JPanel();
        panel1.add(label1);
        panel2.add(label2);
        panel3.add(label3);
        panel4.add(label4);
        panel5.add(label5);
        panel6.add(label6);
        panel7.add(label7);
        panel8.add(label8);
        panel9.add(button1);
        add(panel1);
        add(panel2);
        add(panel3);
        add(panel4);
        add(panel5);
        add(panel6);
        add(panel7);
        add(panel8);
        add(panel9);
        setVisible(true);
    }
    private class CalcButtonListener implements ActionListener
    {
        public void actionPerformed(ActionEvent e)
        {
            String adultPrice;
            String adultAmount;
            String childPrice;
            String childAmount;
            //System.out.println("hello");
            adultPrice = label2.getText();
            adultCost=Double.parseDouble(adultPrice);
            System.out.print("got here");
            adultAmount = label4.getText();
            double grossAdultRevenue =  (adultCost)* Double.parseDouble(adultAmount);
            double netAdultRevenue = (grossAdultRevenue) * percent;
            childPrice = label6.getText();
            childAmount = label8.getText();
            double grossChildRevenue = Double.parseDouble (childPrice)* Double.parseDouble(childAmount);
            double netChildRevenue = grossChildRevenue * percent;
            double grossRevenue = grossChildRevenue+grossAdultRevenue;
            double netRevenue = netAdultRevenue+netChildRevenue;
            JOptionPane.showMessageDialog(null, "Total gross adult revenue : " + grossAdultRevenue + "\n" + 
                                                "Total net adult revenue : " + netAdultRevenue + "\n" + 
                                                "Total gross child revenue : " + grossChildRevenue + "\n" +
                                                "Total net child revenue : " + netChildRevenue + "\n" +
                                                "Total gross revenue of sales : " + grossRevenue + "\n" +
                                                "Total net revenue of sales : " + netRevenue);
        }
    }
    public static void main(String[] args) {
        new TheatreRevenue();
        // TODO Auto-generated method stub
    }
}