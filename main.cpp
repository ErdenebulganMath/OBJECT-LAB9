#include "Employee.h"

int main(){

    Division d1 , d2 ; 
    d1.setDivisionName("Software Engineering") ;
    d2.setDivisionName("Human resources") ;

    JobDescription j1 , j2 , j3 , j4 , j5 ;
    j1.setDescription("Frontend") ;
    j2.setDescription("Backend") ;
    j3.setDescription("Testing") ;
    j4.setDescription("HR Managing") ;
    j5.setDescription("HR Report") ;

    Employee e1 , e2 ;
    e1.setName("Andrew") ; 
    e1.setSsnum("1959") ; 
    e1.setAge(30) ;
    e1.setCompanyID("TECH001") ;
    e1.setTitle("Software Engineer") ;
    e1.setStartDate("2020-05-14") ;
    e1.addDivision(&d1) ;
    e1.addJobDescription(j1) ;

    e2.setName("William") ;
    e2.setSsnum("1960") ;
    e2.setAge(28) ;
    e2.setCompanyID("TECH002") ;
    e2.setTitle("HR Manager") ;
    e2.setStartDate("2024-12-06") ;
    e2.addDivision(&d2) ;
    e2.addJobDescription(j4) ;
    e2.addJobDescription(j5) ;


    Spouse s1 , s2 ;
    s1.setName("Emily") ;
    s1.setSsnum("2024") ;
    s1.setAge(29) ;
    s1.setAnniversaryDate("2022-09-10") ;

    s2.setName("Olivia") ;
    s2.setSsnum("2567") ;
    s2.setAge(27) ;
    s2.setAnniversaryDate("2023-11-20") ;


    Child c1 , c2 , c3 ;
    c1.setName("Sophia") ;
    c1.setSsnum("3001") ;
    c1.setAge(5) ;
    c1.setFavoriteToy("Barbie") ; 

    c2.setName("Alexander") ;
    c2.setSsnum("3002") ;
    c2.setAge(8) ;
    c2.setFavoriteToy("Lego") ;

    c3.setName("Emma") ;
    c3.setSsnum("3003") ;
    c3.setAge(3) ;
    c3.setFavoriteToy("Teddy Bear") ;


    e1.addSpouse(&s1) ;
    e2.addSpouse(&s2) ;

    e1.addChild(c1) ;
    e1.addChild(c2) ;
    e2.addChild(c3) ;


    e1.print() ;
    cout << "\n\n" ;
    e2.print() ;
    
}