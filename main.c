#include <stdio.h>



double checkFileSize( const char * fileName ) {

	FILE * file = fopen( fileName, "rb" );
	double size = -1;

	if( file == NULL ) {
		return -1;
	} // end if

	if( fseek( file, 0, SEEK_END ) ) {
		fclose( file );
		return -1;
	} // end if

//	printf( "DEBUG: file size %d\n", ftell(p) );

	// In MB
	size = (ftell(file) / (1024*1024));
	fclose( file );



	return size;



} // end function checkFileSize


int main(void) {

	return 0;

} // end main
