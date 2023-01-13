#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void showImage(const bool image[N][M])
{
    for(int a = 0; a < 72; a++)
    {
        cout << '-';
    }
    cout << '\n';
    for(int b = 0; b < 30; b++)
    {
        cout << '|';
        for(int c = 0; c < 70; c++)
        {
            if(image[b][c] == 0)
            {
                cout << ' ';
            }
            else if(image[b][c] == 1)
            {
                cout << '*';
            }
        }
        cout << '|';
        cout << '\n';
    }
    for(int d = 0; d < 72; d++)
    {
        cout << '-';
    }
    cout << '\n';
}
void updateImage(bool image[N][M],int x,int y,int z)
{
    for(int A = 0; A < 30; A++)
    {
        for(int B = 0; B < 70; B++)
        {
            if(sqrt(pow((A-y),2)+pow((B-z),2)) <= x-1)
            {
                image[A][B] = 1 ;
            }
        }
    }
}