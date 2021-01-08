// vect.h -- Vector class with <<, more state
#ifndef VECT_H_
#define VECT_H_

#include <iostream> 
 
namespace VECTOR
{
	class Vector {
		public:
			enum Mode{RECT, POL};
		private:
			double x;
			double y;
			double mag;
			double ang;
			Mode mode;
			void set_mag();
			void set_ang();
			void set_x();
			void set_y();
		public:
			Vector();
			Vector(double n1, double n2, Mode form = RECT);
			void reset(double n1, double n2, Mode form = RECT);
			~Vector();
			double xval() const {return x;}
			double yval() const {return y;}
			double magval() const {return mag;}
			double angval() const {return ang;}
			void polar_mode();
			void rect_mode();
			Vector operator+(const Vector& b) const; //const 确保调用对象不会被修改 
			Vector operator-(const Vector& b) const;
			Vector operator-() const;
			Vector operator*(double n) const;
			
			friend Vector operator*(double n, const Vector& b);
			friend std::ostream & operator <<(std::ostream &os, const Vector & v);
	};
}

#endif
