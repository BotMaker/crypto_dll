# crypto_dll

realm of the mad god rsa public key 

PCHAR encyrpt(LPSTR message)
{
      
  RSAFunction rs;
   //Integer it("138058324507555049234246734000441140752323800141033219108446290424209651149061550256257123074054375779322028941830252756690799794787415386877876745524597141573809959460210645347060554401228507084399841512197648738006400503980279149209427806825118624928692857963634531857449103468249102954313978230908185591117");
     Integer it("136342089467838913572203178633753754308518322695230862561644858854246917172156426697297912453834900384789619028269192163146797287128601468308176748768692559820227319038605394585160263253974483415403290336949488219169934651437632357136400496139196507940904386260050442453399818419968593691721037571595385395907"); 
  
  rs.SetModulus(it);
  rs.SetPublicExponent(65537);
  
  //take the above information writes to a file
   HexEncoder  pubFile(new FileSink("pkey.txt"));
 rs.DEREncode(pubFile);
 pubFile.MessageEnd();
 
//perform encryption
   //
   FileSource pubFile2("pkey.txt", true, new HexDecoder);
    RSAES_PKCS1v15_Encryptor pub(pubFile2);
 
    RandomPool randPool;
  
    std::string result;
    StringSource(message, true, new PK_EncryptorFilter(randPool,   pub,    new Base64Encoder(new StringSink(result))));
    
    char * writable = new char[result.size() + 1];
    std::copy(result.begin(), result.end(), writable);
    writable[result.size()] = '\0'; // don't forget the terminating 0
    return writable;    
}
