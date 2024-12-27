#include<bits/stdc++.h>
using namespace std;

class Point
{
    int x,y;

    public:
    Point(int a, int b)
    {
       x = a;
       y = b;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << " ," << y <<")"<< endl;
    }
    friend double distPoint(Point p1, Point p2);
};

double distPoint(Point p1, Point p2) 
{
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}
int main()
{
    Point p(5, 1);
    p.displayPoint();
    Point q (1, 46);
    q.displayPoint();

    double distance = distPoint(p, q);
    cout << "The distance between the two points is: " << distance << endl;
    return 0;
}