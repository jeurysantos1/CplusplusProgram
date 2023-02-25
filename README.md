# CplusplusProgram

<!DOCTYPE html>
<html>
 
  <body>
    <h1>'Investment Calculator'</h1>
	  <h4>This program calculates the balance of an investment over time with or without monthly deposits.
</h4>
	  <p> <em>'How to Use'</em></p>	  
<ul>
	<li> <strong>Run the program.</strong></li>
  <li>Enter the initial investment amount.</li>
  <li>Enter the interest rate (in percent)</li>
  <li> Enter the number of years for the investment.</li>
  <li>If you want to make monthly deposits, enter the amount. Otherwise, enter 0.</li>
  <li>The program will output the balance at the end of each year, with or without monthly deposits, depending on your input.</li>
</ul>

<h3>Functions</h3>  
<h5>BalanceWithoutMonthlyDeposit</h5>
<p>This function takes in the initial investment, interest rate, and number of years as input, and calculates the balance without any monthly deposits. It returns the final balance at the end of the investment period.</p>
	  

  
<h5>BalanceWithMonthlyDeposit</h5>
<p>This function takes in the initial investment, interest rate, number of years, and monthly deposit amount as input, and calculates the balance with monthly deposits. It returns the final balance at the end of the investment period.</p>		  



<h3>Inputs</h3> 
	  
<ul>
  <li>InitialInvestment (double): The initial amount of money invested. </li>
  <li>InterestRate (double): The annual interest rate (in percent). </li>
  <li>NumberOfYears (int): The number of years for the investment.</li>
  <li>MonthlyDeposit (double): The monthly deposit amount (if any, otherwise 0). </li>
</ul>


<h3>Outputs</h3> 
	  
<ul>
  <li>finalBalanceWithoutMonthlyDeposit (double): The final balance without any monthly deposits. </li>
  <li>finalBalanceWithMonthlyDeposit (double): The final balance with monthly deposits (if MonthlyDeposit > 0). </li>
 
</ul>
<h1>My Learnings from this project  </h1>
<p>
The project is a simple investment calculator that helps the user to calculate their expected balance with or without monthly deposits based on their initial investment, interest rate, and number of years of investment. The program takes user inputs and uses two functions to calculate the final balance.

The code is well-structured and easy to read. The use of appropriate variable names and comments makes it easy for other developers to understand the code.
</p>

<p>
One area for improvement is the use of global namespace. It is recommended to avoid using the "using namespace std" statement and explicitly mention the std namespace for each standard library function. This will prevent any naming conflicts in the code.
</p>
<p>
The most challenging part of writing the code may be calculating the balance with monthly deposits. The program uses nested loops to calculate the balance for each month in a year and then sums up the balances for all 12 months to obtain the final balance for that year. The program also calculates the interest earned and deducts the monthly deposits made each year.

The skills learned from this project that will be transferable to other projects include problem-solving, algorithm design, function design, and variable naming conventions.
</p>
<p>
To make the program more maintainable, readable, and adaptable, the code follows best practices such as avoiding magic numbers, using meaningful variable names, and using functions to modularize the code. The use of comments and indentation also makes the code easier to read and maintain.

</p>	  
	  

  </body>
</html>
