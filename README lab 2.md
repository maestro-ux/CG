Title:Digital Differential Analyzer Algorithm

Algorithm:

Start. ∆ y = m ∆ x y2-y1 = m (x2-x1)
Declare variables x,y,x1,y1,x2,y2,k,dx,dy,s,xi,yi and also declare gdriver=DETECT, mode.
Initialize the graphic mode with the path location in TurboC3 folder.
Input the two line end-points and store the left end-points in (x1,y1).
Load (x1, y1) into the frame buffer; that is, plot the first point. put x=x1,y=y1.
Calculate dx=x2-x1 and dy=y2-y1.
If abs (dx) > abs (dy), do s=abs(dx).
Otherwise s= abs(dy).
Then xi=dx/s and yi=dy/s.
Start from k=0 and continuing till k<s,the points will be i. x=x+xi. ii. Y=y+yi.
Plot pixels using putpixel at points (x,y) in specified colour.
Close Graph and stop.

Result:
The program draws a white line from the starting point `(5,1)` to the ending point `(20,60)` using the DDA algorithm. Along the line, each pixel is plotted incrementally to form a smooth straight line. Additionally, the text `"Saugat"` and `"240382"` appears at specified positions on the graphics screen.

Conclusion:
This program demonstrates the DDA line drawing algorithm, which calculates intermediate points using incremental steps to produce a straight line on the screen. It highlights the use of `putpixel` for plotting and `outtextxy` for labeling, showing a simple but effective example of graphics programming in C. Proper initialization of the starting coordinates is essential for accurate line placement.
