class UPerson /* File: v-uperson2.h */
{
public:
    virtual ˜UPerson() = default;
    ...
};
class Student : public UPerson /* File: v-student2.h */
{
public:
    virtual ˜Student()
    {
        for (int j = 0; j < num_courses; ++j)
            delete enrolled[j];
    }
    ...
};
int main()
{
    Student *s = new Student("Simpson", CSE, 3.8);
    s->add_course("COMP1021");
    s->add_course("COMP2012");
    UPerson *p = s;
    delete p; // Actually call Student’s destructor
}
