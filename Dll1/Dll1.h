#ifdef DLL_API
#else
#define  DLL_API _declspec(dllimport)
#endif

DLL_API int add(int a,int b);
DLL_API int subtract(int a,int b);

class /*DLL_API*/ Point
{
public:
     DLL_API void Output(int x,int y);
};