[MeasureMediaPlayer]
Measure=Plugin
Plugin=NowPlaying
PlayerName=#CurrentPlayer#
PlayerType=FILE

[MeasureTrack]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=TITLE

[MeasureAlbum]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=ALBUM

[MeasureArtist]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=ARTIST

[MeasureCover]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=COVER

[MeasureTimeDuration]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=DURATION

[MeasureTimePosition]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=POSITION

[MeasureTimeProgress]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=PROGRESS

[MeasureState]
Measure=Plugin
Plugin=NowPlaying
PlayerName=[MeasureMediaPlayer]
PlayerType=STATE