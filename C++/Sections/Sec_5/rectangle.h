class Rectangle
{
    private:
        float width=0;
        float length=0;
    public:
        //contractor
        Rectangle();
        Rectangle(float length,float width);
        ~Rectangle();
        // Sets
        void Set_width(float width);
        void Set_length(float length);
        // Gets
        float get_width(void);
        float get_length(void);
        float get_area(void);


};