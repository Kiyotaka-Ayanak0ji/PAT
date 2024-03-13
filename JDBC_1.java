// JDBC_1.java
import java.sql.*;
class JDBC_1 {
	public static void main(String rags[]) throws ClassNotFoundException, SQLException {
		// load the JDBC driver class name
		Class.forName("oracle.jdbc.driver.OracleDriver");
		
		// Establish connection to DB
		Connection con=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:orcl", "pat", "pat");
		
		// print the conn object
		System.out.println(con);
		
		// Close the conn object
		con.close();
	}
}

/*
JDBC is a Java DataBase Connectivity API (predefined classes) given by Sun Microsystems. With this API we can connect to different DBs from JDBC program. The API exist in java.sql package (rt.jar). Most of the classes give in this package are interfaces and few classes exist. To these interfaces the impementations are provided by DB vendor (ojdbc14.jar).

interfaces (java.sql) (rt.jar)			implementations (oracle.jdbc.driver) (ojdbc14.jar)
- Driver								- OracleDriver
- Connection							- OracleConnection
- Statement 							- OracleStatement
- PreparedStatement 					- OraclePreparedStatement
- CallableStatement						- OracleCallableStatement
- ResultSet								- OracleResultSet

classes:
- DriverManager
- Types
- SQLException
*/
