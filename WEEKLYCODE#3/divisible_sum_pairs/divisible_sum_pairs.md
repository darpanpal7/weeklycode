# Divisible Sum Pairs 
For this we will use the naive solution to the problem by iterating over the whole array and checking each pair.
We can check every pair, one by one, and use ***(ar[i]+ar[j])%k==0*** to check if the pair is valid.
The complexity of the solution will be <a href="https://www.codecogs.com/eqnedit.php?latex=O(n^2)" target="_blank"><img src="https://latex.codecogs.com/gif.latex?O(n^2)" title="O(n^2)" /></a>
