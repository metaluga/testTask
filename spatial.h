namespace AyxCppTest
{
	struct Point
	{
		double m_x;
		double m_y;
		Point(double x, double y);
		Point(const Point &pt);
        virtual ~Point();

		static bool DbgHasLeaks();
	};

	class Area
	{
	public:
		// returns true if point is inside
        // false if outside or on the line
        virtual ~Area(){};
        virtual bool Contains(const Point &pt) = 0;
	};

	class Circle : public Area
	{
		Point m_pt;
		double m_radius;
	public:
        Circle(Point pt, double radius);
        virtual ~Circle(){};
		bool Contains(const Point &pt) override;
	};

	class Rectangle : public Area
	{
		Point m_TopLeft;
		Point m_BottomRight;
    public:
        virtual ~Rectangle(){};
		Rectangle(Point topLeft, Point bottomRight);
		bool Contains(const Point &pt) override;
		double Size();
	};
}
