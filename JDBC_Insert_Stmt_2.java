// Write a JDBC program to insert record into temp table
// JDBC_Insert_Stmt_2.java

import java.sql.*;
import java.util.*;

class JDBC_Insert_Stmt_2 {
	public static void main(String rags[]) throws Exception {
		Class.forName("oracle.jdbc.driver.OracleDriver");
		
		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "pat", "pat");
		
		Statement stmt=con.createStatement();
		
		Scanner sc=new Scanner(System.in);
		
		System.out.print("Enter ID: ");
		int id=sc.nextInt();
		sc.nextLine();
		
		System.out.print("Enter Name: ");
		String name=sc.nextLine();
		
		System.out.print("Enter Sal: ");
		double sal=sc.nextDouble();
		sc.nextLine();
		
		System.out.print("Enter Desig: ");
		String desig=sc.nextLine();

		int i=stmt.executeUpdate("INSERT INTO temp VALUES ("+id+", '"+name+"',  "+sal+", '"+desig+"')");

		// int i=stmt.executeUpdate("INSERT INTO pat.temp VALUES (1, 'ABC', 50000.00, 'Developer')");
		
		if(i==1) {
			System.out.println(i+" record inserted");
		}
		
		stmt.close();
		con.close();
	}
}
/*
Statement interface is having 2 methods
	int executeUpdate(String sql_dml)
	ResultSet executeQuery(String sql_drl)
*/	
	