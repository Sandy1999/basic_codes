package GradeBook;

import java.awt.Graphics;
import java.util.Scanner;

import javax.swing.JFrame;
import javax.swing.JPanel;

public class DrawPannel extends JPanel {
	
	public void paintComponent(Graphics g){
		super.paintComponent(g);
		int width = getWidth();
		int height = getHeight();
		for (int i = 0; i < width; i+=15) 
		{
		g.drawOval( 10 + i * 10, 10 + i * 10,
				50 + i * 10, 50 + i * 10 );
		}
	}

	
	public static void main(String[] args){
	DrawPannel panel = new DrawPannel();
	JFrame application = new JFrame();
	application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	application.add(panel);
	application.setSize(250,250);
	application.setVisible(true);
	}
}

