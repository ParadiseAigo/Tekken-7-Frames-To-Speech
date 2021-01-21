#include "frames-to-speech.h"
#include "audio.h"

void playFramesAudio(int frames) {
	LPCWSTR path = getWavFilePath(frames);
	if (path[0] != '\0') {
		PlaySound(path, GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
		//Sleep(400);
	}
	//PlaySound(path, GetModuleHandle(NULL), SND_FILENAME | SND_ASYNC);
	//char* buffer = loadWavFile((char*)WAV_14_PATH);
	//PlaySound(buffer, GetModuleHandle(NULL), SND_MEMORY);
}

LPCWSTR getWavFilePath(int frames) {
	LPCWSTR path = L"\0";
	switch (frames) {
	case 10:
		path = WAV_10_PATH;
		break;
	case 11:
		path = WAV_11_PATH;
		break;
	case 12:
		path = WAV_12_PATH;
		break;
	case 13:
		path = WAV_13_PATH;
		break;
	case 14:
		path = WAV_14_PATH;
		break;
	case 15:
		path = WAV_15_PATH;
		break;
	case 16:
		path = WAV_16_PATH;
		break;
	case 17:
		path = WAV_17_PATH;
		break;
	case 18:
		path = WAV_18_PATH;
		break;
	case 19:
		path = WAV_19_PATH;
		break;
	case 20:
		path = WAV_20_PATH;
		break;
	case 21:
		path = WAV_21_PATH;
		break;
	case 22:
		path = WAV_22_PATH;
		break;
	case 23:
		path = WAV_23_PATH;
		break;
	case 24:
		path = WAV_24_PATH;
		break;
	}
	return path;
}

WavFiles* loadWavFiles() {
	WavFiles* result;

}

char* loadWavFile(char* path) {
	char* result;
	FILE* file;
	unsigned long sizeFile, i;
	char c;
	errno_t errorCode;
	if (0 != (errorCode = fopen_s(&file, path, "r"))) {
		printf("Error, code: %d, loadWavFile(char*) failed to open file: %s\n", errorCode, path);
		system("pause");
		exit(0);
	}
	fseek(file, 0L, SEEK_END);
	sizeFile = ftell(file);
	rewind(file);
	result = (char*) malloc((sizeFile + 1) * sizeof(char));
	i = 0;
	while ( (c = fgetc(file)) != EOF) {
		result[i] = fgetc(file);
		i++;
	}
	result[++i] = '\0';
	return result;
}






