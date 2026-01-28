Title: Ellipse Generation Algorithm


Algorithm:

1. Input rx, ry and ellipse center (xc, yc) and obtain the first point on an ellipse centered on the origin as
(x0, y0) = (0, ry)

2. Calculate the initial parameter in region 1 as
p10 = ry² - rx²ry + (1/4)rx²

3. At each xk position, starting at k = 0, if p1k < 0, the next point along the ellipse centered on (0,0) is (xk + 1, yk) and 
p1(k+1) = p1k + 2 ry²x(k+1) + ry²

Otherwise, the next point is (xk + 1, yk – 1) and
p1(k+1) = p1k + 2 ry²x(k+1) -2rx²y(k+1) + ry²

and continue until 2ry²x >= 2rx²y

4. (xo, y0) is the last position calculated in region 1. Calculate the initial parameter in region 2 as
p20 = ry²(x0 + 1/2)² + rx²(y0 - 1)² - rx²ry²

5. At each yk position, starting at k = 0, if p2k > 0, the next point along the ellipse centered on (0,0) is (xk, yk - 1)
p2(k + 1) = p2k - 2rx²y(k + 1) + rx²

Otherwise, the next point is (xk + 1, yk – 1) and 
p2(k + 1) = p2k + 2ry²x(k + 1) - 2rx²y(k + 1) + rx²

Use the same incremental calculations as in region 1. Continue until y = 0.

6. For both regions determine symmetry points in the other three quadrants.

7. Move each calculated pixel position (x, y) onto the elliptical path centered on (xc
, yc) and plot the coordinate values
x = x + xc , y = y + yc



