#include <windows.h>
#include <string.h>
#include <C:/cryptopp/files.h>
#include <C:/cryptopp/osrng.h>
#include <C:/cryptopp/sha.h>
#include <C:/cryptopp/cryptlib.h>
#include <C:/cryptopp/pubkey.h>
#include <C:/cryptopp/rsa.h>
#include <C:/cryptopp/base64.h>
#include "C:/cryptopp/hex.h"
#include "C:/cryptopp/integer.h"
#include "C:/cryptopp/modes.h"


#define DLLIMPORT __declspec (dllexport)

#include "memory_api.h"

			
extern "C"
{
#ifdef __BORLANDC__
  #pragma argsused
#endif
  int WINAPI DllMain( HINSTANCE hInst, /* Library instance handle. */
  unsigned long reason, /* Reason this function is being called. */
  void * lpReserved ) /* Not used. */
  {
    DllInstance=hInst;
    return 1;
  }
  int WINAPI DllEntryPoint( HINSTANCE hInst, unsigned long reason, void * lpReserved )
  {
    return DllMain( hInst, reason, lpReserved );
  }


}
