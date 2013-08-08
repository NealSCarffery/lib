/*
 * ============================================================================
 *
 *       Filename:  test_singleton.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/14/13 19:55:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  lxf (), 
 *        Company:  NDSL
 *
 * ============================================================================
 */
#include    "base/singleton.h"
#include    "base/log.h"
using namespace base;

class A : public base::Singleton<A>
{
    friend class base::Singleton<A>;
    private:
        A(){}
    public:
        int id;
};

int main()
{
    A::GetInstance()->id = 3;

    LOG_DEBUG << A::GetInstance()->id;

    LOG_DEBUG << "\n";
    return 0;
}
