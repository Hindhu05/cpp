#include <iostream>
using namespace std;

/*
                    public derivation   private derivation  protected derivation
1. private members   not inherited        not inherited       not inherited
2. protected members  protected           private               protected
3. public members      public             private               protected
 */
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number(void)
{
    cout << "the roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths, science;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m, float s)
{
    maths = m;
    science = s;
}
void Exam ::get_marks(void)
{
    cout << "marks in maths are: " << maths << endl;
    cout << "marks in science are: " << science << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << " your percentage is " << (maths + science) / 2 << endl;
    }
};
int main()
{
    Result result;
    result.set_roll_number(12);
    // result.get_roll_number();
    result.set_marks(70, 60);
    // result.get_marks();
    result.display_result();
    return 0;
}