// SoundSets configuration for KAMAZ 65228

class SoundSets {
    class KAMAZ_65228_engine_SoundSet {
        sound[] = {"KAMAZ_65228_engine_start", "KAMAZ_65228_engine_loop"};
        frequency = "1.0";
        volume = "db+0";
    }

    class KAMAZ_65228_door_SoundSet {
        sound[] = {"KAMAZ_65228_door_open", "KAMAZ_65228_door_close"};
        frequency = "1.0";
        volume = "db+0";
    }

    class KAMAZ_65228_horn_SoundSet {
        sound[] = {"KAMAZ_65228_horn_sound"};
        frequency = "1.0";
        volume = "db+0";
    }

    class KAMAZ_65228_failed_start_SoundSet {
        sound[] = {"KAMAZ_65228_failed_start_sound"};
        frequency = "1.0";
        volume = "db+0";
    }
}

// SoundShaders configuration for KAMAZ 65228

class SoundShaders {
    class KAMAZ_65228_engine_start {
        samples[] = {"KAMAZ_65228_engine_start.wav"};
        volume = 1.0;
        range[] = {0, 500};
        frequency = 1.0;
    }

    class KAMAZ_65228_engine_loop {
        samples[] = {"KAMAZ_65228_engine_loop.wav"};
        volume = 1.0;
        range[] = {0, 500};
        frequency = 1.0;
    }

    class KAMAZ_65228_door_open {
        samples[] = {"KAMAZ_65228_door_open.wav"};
        volume = 1.0;
        range[] = {0, 100};
        frequency = 1.0;
    }

    class KAMAZ_65228_door_close {
        samples[] = {"KAMAZ_65228_door_close.wav"};
        volume = 1.0;
        range[] = {0, 100};
        frequency = 1.0;
    }

    class KAMAZ_65228_horn_sound {
        samples[] = {"KAMAZ_65228_horn.wav"};
        volume = 1.0;
        range[] = {0, 200};
        frequency = 1.0;
    }

    class KAMAZ_65228_failed_start_sound {
        samples[] = {"KAMAZ_65228_failed_start.wav"};
        volume = 1.0;
        range[] = {0, 200};
        frequency = 1.0;
    }
}
