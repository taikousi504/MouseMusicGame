#pragma once

class Sound
{
private:
	int soundHandle;

public:
	Sound();
	~Sound();
	void LoadSound(const char* filename);
	void Play();
	void Stop();
	void DeleteSound();
	/// <summary>
	/// ボリュームを設定する
	/// </summary>
	/// <param name="vol">0〜100</param>
	void SetVolume(int vol);
	bool isPlayNow();
};

