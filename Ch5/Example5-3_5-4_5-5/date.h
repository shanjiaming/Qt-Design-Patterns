#ifndef _DATE_H_
#define _DATE_H_
//start

/*Parameters with default arguments must be the right-most (trailing) parameters in
the parameter list. Trailing arguments with default values can be left out of the function
call. The corresponding parameters will then be initialized with the default
values.
From the viewpoint of the function, if it is called with one missing argument, that
argument must correspond to the last parameter in the list. If two arguments are missing,
they must correspond to the last two parameters in the list (and so forth).
Because an optional argument specifier applies to a function’s interface, it belongs
with the declaration, not the definition of the function if the declaration is kept in a
separate header file. A function with default arguments can be called in more than one
way. If all arguments for a function are optional, the function can be called with no
arguments. Declaring a function with n optional arguments can be thought of as an
abbreviated way of declaring n+1 functions—one for each possible way of calling the
function.*/
class Date {
public:
    Date(int d = 0, int m = 0, int y = 0);

    /** @param eoln if true, output end of line
        character after the date.
    */
    void display(bool eoln = true) const;
//end

//start
private:
    int m_Day, m_Month, m_Year;
};
//end
#endif
