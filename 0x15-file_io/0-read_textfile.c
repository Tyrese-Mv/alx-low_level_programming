#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * read_textfile - reads file content
 * @filename: name of the file
 * @letters: number of letters
 * Return: result of print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t result, _writeBuf;
	FILE *_file;
	char *_output;

	if (filename == NULL)
		return (0);
	_file = fopen(filename, "r");
	if (_file == NULL)
		return (0);
	_output = (char *) malloc(sizeof(char) * (letters + 1));
	if (_output == NULL)
	{
		fclose(_file);
		return (0);
	}
	result = fread(_output, sizeof(char), letters, _file);
	_output[result] = '\0';
	_writeBuf = write(STDOUT_FILENO, _output, result);
	if (_writeBuf == -1 || _writeBuf != result)
	{
		fclose(_file);
		free(_output);
		return (0);
	}
	fclose(_file);
	free(_output);
	return (_writeBuf);
}
