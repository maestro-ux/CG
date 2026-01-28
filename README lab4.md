Title: Midpoint Circle Generation Algorithm



Algorithm:



&nbsp;1. Input radius r and circle centre (xc, yc), then set the coordinates for the first point on the circumference of a circle centered on the origin as:



&nbsp;                              (x0,y0) = (0,r)



&nbsp;2. Calculate the initial value of the decision parameter as:



&nbsp;                               po=5/4-r

&nbsp;  

&nbsp;3. Starting with k = 0 at each position xk, perform the following test. If pk < 0, the next point along the circle centered on (0, 0) is (x{k+1}, yk) and:

&nbsp;                               

&nbsp;                               p{k+1} = pk + 2x{k+1} +1



&nbsp;  

&nbsp;  

Otherwise the next point along the circle is (x{k+1}, y{k-1}) and:



&nbsp;                               p{k+1} = pk + 2x{k+1} + 1 - 2y{k+1}



&nbsp;  

&nbsp;4. Determine symmetry points in the other seven octants.

&nbsp;5. Move each calculated pixel position (x, y) onto the circular path centered at (xc, yc)   to plot the coordinate values:

&nbsp;  

&nbsp;6. Repeat steps 3 to 5 until x >= y



&nbsp;                     x = x + xc          y = y + yc



Symmetric pixel positions:

The following lines use a putpixel function to plot the eight symmetric points for every calculated (x, y) coordinate, shifted by the center (xc, yc):

&nbsp;\* putpixel(xc+x, yc-y, GREEN); // For pixel (x, y)

&nbsp;\* putpixel(xc+y, yc-x, GREEN); // For pixel (y, x)

&nbsp;\* putpixel(xc+y, yc+x, GREEN); // For pixel (y, -x)

&nbsp;\* putpixel(xc+x, yc+y, GREEN); // For pixel (x, -y)

&nbsp;\* putpixel(xc-x, yc+y, GREEN); // For pixel (-x, -y)

&nbsp;\* putpixel(xc-y, yc+x, GREEN); // For pixel (-y, -x)

&nbsp;\* putpixel(xc-y, yc-x, GREEN); // For pixel (-y, x)

&nbsp;\* putpixel(xc-x, yc-y, GREEN); // For pixel (-x, y)





Conclusion:
We learnt to draw circle in BGI using midpoint circle algorithm.


We learnt to draw circle in BGI using midpoint circle algorithm.
