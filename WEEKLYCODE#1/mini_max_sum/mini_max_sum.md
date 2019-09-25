# Mini Max Sum
First, let's make some observations:

We can minimize the sum by excluding the largest element from the sum.
We can maximize the sum by excluding the smallest element from the sum.

There are five integers, and the maximum value of each integer is <a href="https://www.codecogs.com/eqnedit.php?latex=10^{9}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?10^{9}" title="10^{9}" /></a>  . This means that, worst-case scenario, our final sum could be a maximum of <a href="https://www.codecogs.com/eqnedit.php?latex=4*10^{9}" target="_blank"><img src="https://latex.codecogs.com/gif.latex?4*10^{9}" title="4*10^{9}" /></a> (which is outside of the bounds of an integer).
To solve this, we read in five elements; for each element:
	
	

 1.  We sort the array, now the maximum number is at last and the minimum number is at first position.
 2.  To produce the :
 - **MAXSum** = We take the last 4 elements.
 - **MINSum** = We take the first 4 elements.   
