# Sherlock and Array
**Problem**: Find if there exists an element in the array, such that, the sum of elements on its left is equal to the sum of elements on its right.  
Formally, find an ***i*** , such that,    ![enter image description here](https://i.ibb.co/C0hVnSF/7-AAD2910-4570-4417-A305-F1-B5642-ABA0-B.png)
  
**Solution**:  
  
**Approach 1:**  
We first count  ![enter image description here](https://i.ibb.co/8gKWvNk/4-C837-DB0-2-E8-F-4078-8958-E52509-F57-F02.png)  
Now if for an ***i*** , let's define  ![enter image description here](https://i.ibb.co/mq37p3b/DD58-C391-DFD2-472-B-9196-A96317-FD768-D.png)
If  ![enter image description here](https://i.ibb.co/FgSqvhS/BA5-FCBAF-C94-D-4-BA9-A7-FC-3405-F4153-DCC.png), the answer is  `YES`.  
  
So, we maintain a sum variable in second pass which we keep updating and checking.  
  
**Approach 2:**  
We keep a prefix array pre, where
![enter image description here](https://i.ibb.co/0fMx4ZV/9197-DF91-14-FD-487-C-B147-2-F48-CB4-F163-E.png)  Traversing over ***i*** , we can easily check whether sum on left is equal to sum on right.
  
We can use the following property to calculate prefix array ***pre***, in ***O(n)***  steps.

```
pre[i] = 0 if i == 0
pre[i] = pre[i-1] + A[i] else

```

Now we can represent
![enter image description here](https://i.ibb.co/XjkWmcG/96-CBE786-436-B-4640-B2-BF-7-AA4-C9-A17-FCE.png)
