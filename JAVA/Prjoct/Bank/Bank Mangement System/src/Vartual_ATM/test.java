package Vartual_ATM;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.*;

public class test {
    public static void main(String[] args) {
        
        Connection connection = null;
        Statement statement = null;
        
        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            connection = DriverManager.getConnection("jdbc:mysql://localhost:3306/vartual_atm", "root", "sakib");
            statement = connection.createStatement();
            System.out.println(connection);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}