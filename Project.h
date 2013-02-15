#ifndef PROJECT_H
#define PROJECT_H


class Project
{
    public:
        Project();
        virtual ~Project();
        void multiple_of_3_and_5 ();
        void even_fibonacci();
        void largest_prime_factor();
        void largest_palindrome_product();
        void smallest_multiple();
        void sum_square_diff();
        int onethousandfirst_prime();
        void largest_product_in_series();
        void special_pytho_triplet(void);
            int checkTriplet( int a, int b, int c );
            int checkAdd( int a, int b, int c, int num);
        void summation_of_primes();
    protected:
    private:
};


#endif // PROJECT_H
