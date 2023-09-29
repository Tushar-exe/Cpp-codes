#include<iostream>
using namespace std;
const int pi=3.147;
class Point
{   
    public:
	int x_coordinate;
	int y_coordinate;
	
	Point()
	{
		cout<<"Enter X and Y Co-ordinates \n";
		cin>>x_coordinate
			>>y_coordinate;
		this->x_coordinate=x_coordinate;
		this->y_coordinate=y_coordinate;
	}
	
//	void getData()
//	{
//		cout<<"Enter the starting and end point :";
//		cin>>x_coordinate>>y_coordinate;
//	}
	void display()
	{
		cout<<"Point:"<<"("<<x_coordinate<<","<<y_coordinate<<")"<<endl;
	}
	
};

class Shape
{
	public:

	int thickness;
	
	virtual double area()=0;
};

class Line:public Shape
{
	int start_Point;
	int end_Point;
	Point point;
	public:
		
//		Line(int s,int e, Point *point)
//		{
//			this->start_Point=s;
//			this->end_Point=e;
//			this->point=point;
//		}
		
		void getData()
		{
			cout<<"Enter the starting and ending point:";
			cin>>start_Point>>end_Point;
		}

		
		void display()
		{
			cout<<"line with starting and end point is:"
			<<start_Point<<" "<<end_Point<<" "
			<<point.x_coordinate<<" "<<point.y_coordinate<<" "
			<<endl;
		}
		
		
	
 } ;
 
class Rectangle:public Shape
{
	int length;
	int breadth;
	public:
			void getData()
			{
				cout<<"Enter the length and breadth of rectangle:";
				cin>>length>>breadth;
			}
		
	double area()
	{
		
		cout<<"Area of Rectangle is:"<<(length*breadth);
		return 0;
	}
	
	
};

class Square:public Shape
{
	int side;
	public:
		
		void getData()
		{
			cout<<"Enter the side :";
			cin>>side;
		}
		double area()
		{
			cout<<"Area of Square is:"<<(side*side);
			return 0;
		}
		
		
	
};

class Circle:public Shape
{   
	int radius;
	Point p;
	public:
		void getData()
		{
			cout<<"Enter the radius of the circle:"<<endl;
			cin>>radius;
		}
		
		double area()
		{
			cout<<"Area of circle is:"<<pi*radius*radius;
		}
			void display()
		{
			cout<<"center of the circle is:"<<p.x_coordinate<<" "<<p.y_coordinate<<endl;
			
		}
	
};

class Elipse:public Shape
{
	int length;
	int height;
	Point p2;
	public:
			void getData()
		{
			cout<<"Enter the length and height of the Elipse:"<<endl;
			cin>>length>>height;
		}
		double area()
		{
		 	cout<<"Area of Elipse is:"<<pi*length*height;	
		}
		
			void display()
		{
			cout<<"center of the circle is:"<<p2.x_coordinate<<" "<<p2.y_coordinate<<endl;
			
		}
	
};
int main()
{   
 	 //Line L;
 	
 	 
 	  int start_Point;
	int end_Point;
 	 
	int ch=1;
	
	while(ch!=0)
	{
	
	cout<<"\n******************\n";
	cout<<endl;
    cout<<"Input 1 for line :\n";
    cout<<"Input 2 for area of rectangle:\n";
    cout<<"Input 3 for area of square:\n";
    cout<<"Input 4 for area of circle:\n";
    cout<<"Input 5 for area of Elipse:\n";
    cout<<"Enter 0 to exit\n";
    cout<<"\n******************\n";
    cout<<"Enter your choice : ";
    cin>>ch;
    switch(ch)
    {
	
  			case 1:
  				{
  					cout<<"Enter the starting and ending point:";
  					cin>>start_Point>>end_Point;
  					cout<<"Start point and end point of line is:"<<"(x="<<start_Point<<","<<"y="<<end_Point<<")"<<endl;
	
				  }
            break;
            
            case 2:
			{
            	Rectangle r;
                r.getData();
                r.area();
                break;
            }
                  
            case 3:{
				Square s;
                s.getData();
                s.area();
                break;
              }
                  
            case 4:
            	{
				  Circle c;
                 
                  c.getData();
                  c.display();
                  c.area();
                  break;
              }
            case 5:
            	{
				
            	 Elipse e;
                  
                  e.getData();
                  e.display();
                  e.area();
                  break;
              }
            
            default:
                  cout<<"you have entered wrong option please choose from the given options.";
                  exit(0);
                  
              }
      }
          
          
}
	
