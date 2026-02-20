#include <graphics.h>
#include <stdio.h>

int main()
{
    int gd = DETECT, gm;
    float xmin, ymin, xmax, ymax;
    float x1, y1, x2, y2, m;
    int start[4], end[4], code[4];

    initgraph(&gd, &gm, "");

    printf("\nEnter bottom left coordinate of viewport: ");
    scanf("%f %f", &xmin, &ymin);
    printf("Enter top right coordinate of viewport: ");
    scanf("%f %f", &xmax, &ymax);

    printf("Enter starting point of line: ");
    scanf("%f %f", &x1, &y1);
    printf("Enter ending point of line: ");
    scanf("%f %f", &x2, &y2);

    // Initialize arrays
    for(int i=0; i<4; i++) {
        start[i] = 0;
        end[i] = 0;
    }

    m = (x2 - x1 != 0) ? (y2 - y1)/(x2 - x1) : 1e9; // avoid division by zero

    // Compute region codes
    if(x1 < xmin) start[0] = 1;  // left
    if(x1 > xmax) start[1] = 1;  // right
    if(y1 > ymax) start[2] = 1;  // top
    if(y1 < ymin) start[3] = 1;  // bottom

    if(x2 < xmin) end[0] = 1;
    if(x2 > xmax) end[1] = 1;
    if(y2 > ymax) end[2] = 1;
    if(y2 < ymin) end[3] = 1;

    for(int i=0; i<4; i++) code[i] = start[i] && end[i];

    cleardevice();
    rectangle((int)xmin,(int)ymin,(int)xmax,(int)ymax); // draw viewport

    if(code[0]==0 && code[1]==0 && code[2]==0 && code[3]==0) {
        // Totally visible
        if(start[0]==0 && start[1]==0 && start[2]==0 && start[3]==0 &&
           end[0]==0 && end[1]==0 && end[2]==0 && end[3]==0)
        {
            printf("\nLine is totally visible");
            line((int)x1, (int)y1, (int)x2, (int)y2);
        } else {
            printf("\nLine is partially visible");
            line((int)x1, (int)y1, (int)x2, (int)y2);

            // Clip against top/bottom
            if(start[2]==0 && start[3]==1) { x1 = x1 + (ymin - y1)/m; y1 = ymin; }
            if(end[2]==0 && end[3]==1) { x2 = x2 + (ymin - y2)/m; y2 = ymin; }
            if(start[2]==1 && start[3]==0) { x1 = x1 + (ymax - y1)/m; y1 = ymax; }
            if(end[2]==1 && end[3]==0) { x2 = x2 + (ymax - y2)/m; y2 = ymax; }

            // Clip against left/right
            if(start[1]==0 && start[0]==1) { y1 = y1 + m*(xmin - x1); x1 = xmin; }
            if(end[1]==0 && end[0]==1) { y2 = y2 + m*(xmin - x2); x2 = xmin; }
            if(start[1]==1 && start[0]==0) { y1 = y1 + m*(xmax - x1); x1 = xmax; }
            if(end[1]==1 && end[0]==0) { y2 = y2 + m*(xmax - x2); x2 = xmax; }

            cleardevice();
            rectangle((int)xmin,(int)ymin,(int)xmax,(int)ymax);
            printf("\nAfter clipping:");
            line((int)x1, (int)y1, (int)x2, (int)y2);
        }
    } else {
        printf("\nLine is invisible");
    }

    getch();
    closegraph();
    return 0;
}
