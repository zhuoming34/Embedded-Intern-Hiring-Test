# Embedded-Intern-Hiring-Test
 
## Prime or Not (c)
- **INPUT**: a number **n**
- **OUTPUT**:
  - 1 if **n** is a prime number
  - output the smallest multiplier if **n** is not a prime number

e.g.

> Input: 24 -> Output: 2

> Input: 15 -> Output: 3

> Input: 83 -> Output: 1



## Tree Depth (c++20)
- **INPUT**: a string of parentheses-representing tree 
  - (each node is represent by a pair of open parenthesis and close parenthesis) 
- **OUTPUT**: depth of the tree

e.g. 
```
((()((()())))()(()))
```
![tree_example](https://github.com/zhuoming34/Embedded-Intern-Hiring-Test/blob/main/tree_example.png)

**Depth is 5 for the example above**



## String Line Reversal (c)
- **INPUT**: user input characters (max length of 1024)
- **OUTPUT**: print the lines
  - reverse a line if it ends with '\n'
  - do not reverse a line if it starts with '#'
  - append to the next line if a line ends with '\' before '\n'

e.g.
*input*
```
abc123
#abc123
abcd\
efgh
```
*output*
```
321cba
abc123
hgfedcba
```



## Fastest Escalator (c++20)
- **INPUT**: a 2D vector 
  - ({ Left branch duration, Right branch duration, crossroad duration }) 
- **OUTPUT**: the least amount of time to arrive at the top

e.g.
```
 { {7, 3, 2},
   {3, 6, 1} }
```
![escalator_example](https://github.com/zhuoming34/Embedded-Intern-Hiring-Test/blob/main/escalator_example.png)

**Time to arrive at the top is 6 for the example above**
