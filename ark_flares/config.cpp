class CfgPatches {
    class ark_flares {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.68;
        requiredAddons[] = {"ace_common", "ace_grenades"};
        author = "ACE3";
        authorUrl = "https://github.com/acemod/ACE3/";
    };
};

class CfgAmmo {
    class FlareCore;
    class FlareBase: FlareCore {};

    class F_40mm_White: FlareBase {
        intensity = 1000000; // vanilla: 10000
        timeToLive = 40; // vanilla: 25
        coefGravity = 0.25; // vanilla: undefined (would be 1)
        // Makes the ammo fall the ground slower
    };

    class Flare_82mm_AMOS_White: FlareCore {
        intensity = 1500000; // vanilla: 10000
    };
};