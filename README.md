# Pi-Calculation-With-Multithreads
Multithreaded application that computes the number of pi by Taylor series.

## Taylor Series

The Taylor series is a mathematical term and is a representation of a function as an infinite sum of the terms of that function calculated from the derivative values at a single point.

The Taylor series of any degree derivative, real or complex function f(x) in the interval (a-r, a+r), where a is a real or complex number, is defined as shown in the formula below.

![Taylor Series Formula](https://github.com/tugbaguler/Pi-Calculation-With-Multithreads/blob/main/assets/taylor_series_formula.jpg)

The more regular representation of the formula using the sigma sign is as follows.

![Taylor Series Formula](https://github.com/tugbaguler/Pi-Calculation-With-Multithreads/blob/main/assets/taylor_series_formula2.jpg)

Here n!, n factorial; If ƒ(n)(a) is n of the f function. specifies the value of the derivative at point a. The zeroth derivative of the function f is defined by f itself, and (x − a)0 and 0! are assumed to be equal to 1. The case where a is equal to zero (a = 0) is special and is called the Maclaurin series.

The number pi is a mathematical constant denoted by π, which expresses the ratio of the circumference of a circle to the diameter of that circle. A pi is an irrational number. A decimal number does not end as an integer or repeat forever (eg 1.66666…). Also called Archimedes constant or Ludolph number.

Regardless of its size, dividing the circumference of a circle by the diameter of the same circle gives a value of approximately 3.14. This is the pi number. It is approximated because pi has many digits. Finally, 31.4 trillion digits have been calculated.

Here, , loops will be used to determine approximations of mathematical constants and will apply Pi's Taylor series approach. (~3.1415...)

![Pi Approach](https://github.com/tugbaguler/Pi-Calculation-With-Multithreads/blob/main/assets/pi_approach.jpg)

If the mathematical operation shown in parentheses (1/1 -1/3 + 1/5 -1/7...) is performed approximately 1,000,000 times or more, the number 3.14 is approached. This process will be done with multithreaded, and the running speed and error rates of the program will be compared according to the 
number of threads.

