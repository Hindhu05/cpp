# include<iostream>
using namespace std;

class Student{
    protected:
    int roll_no;
    public:
    void set_roll_number(int a){
        roll_no = a;
    }
    void get_roll_number(void){
        cout<<"your roll number is "<<roll_no<<endl;
    }
};
class Test : virtual public Student{
    protected:
    float maths, physics;
    public:
    void set_marks(float m, float p){
        maths = m;
        physics = p;
    }
    void get_marks(void){
        cout <<"marks in maths are "<<maths<<endl;
        cout <<"marks in physics are "<<physics<<endl;
    }
};
class Sports : virtual public Student{
    protected:
    float score;
    public:
    void set_score(float s){
        score = s;
    }
    void get_score(void){
         cout<<" your sport score is "<<score<< endl;
    }
};
class Result : public Test, public Sports{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        get_roll_number();
        get_marks();
        get_score();
        cout <<" your total score is "<<total<<endl;
    }
};
int main(){
Result hindhu;
hindhu.set_roll_number(12);
hindhu.set_marks(89.5, 92.7);
hindhu.set_score(78);
hindhu.display();
    return 0;
}