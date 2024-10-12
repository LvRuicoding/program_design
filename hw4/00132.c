/*
    吕睿 22301050204
*/

#include <stdio.h>
#include <math.h>

float r(float x1, float y1, float x2, float y2) {
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int is_not_triangle(float d1, float d2, float d3) {
    if (d1 + d2 <= d3 || d3 + d2 <= d1 || d1 + d3 <= d2) { 
        return 1; 
    }
    return 0;
}

int equal(float a, float b) {
    return fabs(a - b) < 0.0001;
}

int hav_ver(float d1, float d2, float d3) {
    if (fabs(d1 * d1 + d2 * d2 - d3 * d3) < 0.0001) { return 1; }
    if (fabs(d1 * d1 + d3 * d3 - d2 * d2) < 0.0001) { return 1; }
    if (fabs(d3 * d3 + d2 * d2 - d1 * d1) < 0.0001) { return 1; }
    return 0;
}

int main() {
    float x1, y1, x2, y2, x3, y3;
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    
    float d12 = r(x1, y1, x2, y2);
    float d13 = r(x1, y1, x3, y3);
    float d23 = r(x3, y3, x2, y2);

    if (is_not_triangle(d12, d13, d23)) {
        printf("非三角形");
    } else if (equal(d12, d13) && equal(d12, d23)) {
        printf("等边三角形");
    } else if (hav_ver(d12, d23, d13) && (equal(d12, d13) || equal(d12, d23) || equal(d23, d13))) {
        printf("等腰直角三角形");
    } else if (hav_ver(d12, d23, d13)) {
        printf("直角三角形");
    } else if (equal(d12, d13) || equal(d12, d23) || equal(d23, d13)) {
        printf("等腰三角形");
    } else {
        printf("普通三角形");
    }
    return 0;
}
