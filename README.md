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

  </body>
</html>
