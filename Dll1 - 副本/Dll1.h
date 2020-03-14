#ifdef DLL_API
#else
#define  DLL_API extern "C" _declspec(dllimport)
#endif

DLL_API int _stdcall add(int a,int b);
DLL_API int _stdcall subtract(int a,int b);

//class /*DLL_API*/ Point
/*{
public:
     DLL_API void Output(int x,int y);
};*/