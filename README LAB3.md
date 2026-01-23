Title: Bresenhem Line Drawing Algorithm

Algorithm:

Input the two line end-points, storing the left end-point in (x0, y0)

Plot the point (x0, y0)

Calculate the constants Δx, Δy, 2Δy, and (2Δy - 2Δx) and get the first value for the decision parameter as: p0 = 2Δy - Δx

At each xk along the line, starting at k = 0, perform the following test. If pk < 0, the next point to plot is (xk+1, yk ) and:

               pk+1 = pk + 2Δy
Otherwise, the next point to plot is (xk+1, yk+1) and:

                  pk+1 = pk + 2Δy - 2Δx
Repeat step 4 (Δx – 1) times
NOTE: The algorithm and derivation above assumes slopes are less than 1. For other slopes we need to adjust the algorithm slightly



Result:

A green circle appears on the screen at the specified center (xc, yc) with radius R.
Each pixel appears slowly because of delay(50), so you can see the circle being drawn step by step.
Inside the circle, the text appears:
Shishir Bhattarai
240370
The circle drawing is smooth and symmetric because it uses the 8-way symmetry principle.

Conclusion:

The program successfully demonstrates the Midpoint Circle Algorithm in C graphics.
It illustrates the concept of symmetry to reduce computation (calculating one octant and reflecting points).
Adding delays shows step-by-step pixel plotting, which helps in visual learning.
Using outtextxy, you can label the circle with text at its center.
This code is a good example of basic graphics programming in Turbo C and teaches circle plotting without using the circle() function.
