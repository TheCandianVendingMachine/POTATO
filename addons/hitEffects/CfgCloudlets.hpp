class CfgCloudlets {
    class Default;
    class ImpactDustWood;
    class WoodChippings1;
    class WoodChippings2;
    class CircleDustBig: Default {
        lifeTime = "6 + (intensity * 0.3)";
        lifeTimeVar = "1 + (intensity * 0.2)";
    };
    class CircleDustMed: Default {
        lifeTime = "6 + (intensity * 0.3)";
        lifeTimeVar = "1 + (intensity * 0.2)";
    };
    class CloudBigLight: Default {
        lifeTime = "8 + (intensity * 0.4)";
        lifeTimeVar = "4 + (intensity * 0.1)";
    };
    class CloudMedLight: Default {
        lifeTime = "12 + (intensity * 0.4)";
        lifeTimeVar = "4 + (intensity * 0.1)";
    };
    class CloudBigDark: Default {
        lifeTime = "18 + (intensity * 0.4)";
        lifeTimeVar = "6 + (intensity * 0.1)";
    };
    class CloudMedDark: Default {
        lifeTime = "14 + (intensity * 0.4)";
        lifeTimeVar = "5 + (intensity * 0.1)";
    };
    class BombSmk1: Default {
        lifeTime = "9 + (intensity * 0.4)";
        lifeTimeVar = "3 + (intensity * 0.1)";
    };
    class BombSmk2: Default {
        lifeTime = "7 + (intensity * 0.4)";
        lifeTimeVar = "1 + (intensity * 0.1)";
    };
    class BombSmk3: Default {
        lifeTime = "15 + (intensity * 0.4)";
        lifeTimeVar = "3 + (intensity * 0.1)";
    };
    class GVAR(noFX): Default {
        lifeTime = 0;
        lifeTimeVar = 0;
    };
    class GVAR(explosionAmmoFlash): Default {
        circleVelocity[] = {0,0,0};
        moveVelocity[] = {0,0,0};
        size[] = {"0.7 + intensity * 0.25"};
        color[] = {{1,1,1,-10}};
        colorCoef[] = {1,1,1,1};
        animationSpeed[] = {1000};
        position[] = {0,0,0};
        positionVar[] = {0,0,0};
        moveVelocityVar[] = {0,0,0};
        colorVar[] = {0.05,0.05,0.05,5};
        interval = 1;
        circleRadius = 0;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 2;
        particleFSFrameCount = 8;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        lifeTime = 0.03;
        rotationVelocity = 0;
        weight = 1.275;
        volume = 1;
        rubbing = 0;
        sizeCoef = 1;
        animationSpeedCoef = 100;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0;
        rotationVelocityVar = 0;
        sizeVar = 0.3;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class GVAR(impactSmoke): Default {
        circleVelocity[] = {0,0,0};
        moveVelocity[] = {0,0.3,0};
        size[] = {0.5,0.7,1};
        color[] = {{0.6,0.6,0.6,0.6},{0.65,0.65,0.65,0.4},{0.75,0.75,0.75,0.25},{0.8,0.8,0.8,0.1},{0.85,0.85,0.85,0}};
        colorCoef[] = {1,1,1,1};
        animationSpeed[] = {1};
        position[] = {0,0,0};
        positionVar[] = {0.2,0.2,0.2};
        moveVelocityVar[] = {0.1,0.4,0.1};
        colorVar[] = {0.05,0.05,0.05,0.3};
        interval = 0.004;
        circleRadius = 0;
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 8;
        particleFSLoop = 0;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        lifeTime = 2;
        rotationVelocity = 1;
        weight = 1.3;
        volume = 1;
        rubbing = 0.5;
        sizeCoef = 1;
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.05;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 1;
        rotationVelocityVar = 0;
        sizeVar = 0.2;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class GVAR(impactSpark): Default {
        interval = 0.003;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        lifeTime = 0.3;
        moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 150 * 0.66","( - inDirY * 2 + surfNormalY / 2) * inSpeed / 150 * 0.66","( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 150 * 0.66"};
        rotationVelocity = 1;
        weight = 0.5;
        volume = 0.1;
        rubbing = 0.0;
        size[] = {"0.05 * intensity",0};
        sizeCoef = 1;
        color[] = {{1,1,1,-7}};
        colorCoef[] = {1,1,1,1};
        animationSpeed[] = {1000};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.1;
        position[] = {0,0,0};
        positionVar[] = {0.05,0.05,0.05};
        moveVelocityVar[] = {1,1,1};
        rotationVelocityVar = 0;
        sizeVar = 0;
        colorVar[] = {0.05,0.05,0.05,5};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class GVAR(explosionSparks): Default {
        interval = 0.001;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 13;
        particleFSFrameCount = 2;
        particleFSLoop = 0;
        angleVar = 360;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = 0.4;
        moveVelocity[] = {0,0,0};
        rotationVelocity = 1;
        weight = 150;
        volume = 7.9;
        rubbing = 70;
        size[] = {0.02,0.02,0.02,0.015,0.01,0.008,0.008,0.005,0.003,0};
        color[] = {{3,1,1,-50}};
        animationSpeed[] = {2000};
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        lifeTimeVar = 0.1;
        positionVar[] = {0,0,0};
        MoveVelocityVar[] = {7,8,7};
        rotationVelocityVar = 1;
        sizeVar = 0;
        colorVar[] = {0.05,0.05,0.05,5};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class GVAR(impactDust): Default {
        interval = 0.05;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        moveVelocity[] = {"surfNormalX * (0.2+(intensity*2))","surfNormalY * (.2+(intensity*.4))","surfNormalZ * (0.2+(intensity*2))"};
        moveVelocityVar[] = {".2+(intensity*.5)",".1+(intensity*0.2)",".2+(intensity*.5)"};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        animationSpeed[] = {0.8,0.4};
        animationSpeedCoef = 1;
        angle = 0;
        angleVar = 0;
        rotationVelocityVar = 0;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        lifeTime = "1+(intensity*3.5)";
        lifeTimeVar = ".2+(intensity*.5)";
        weight = "1.275*20";
        volume = "1*20";
        rubbing = 2;
        size[] = {".05+(intensity*.2)","1.2+(intensity*1)","1.3+(intensity*1.0)","1.4+(intensity*1.1)","1.5+(intensity*1.2)","1.6+(intensity*1.3)","1.7+(intensity*1.4)","1.8+(intensity*1.5)"};
        sizeCoef = 1;
        sizeVar = 0.1;
        color[] = {{0.85,0.73,0.77,0.15},{0.75,0.74,0.71,0}};
        colorCoef[] = {1,1,1,1};
        colorVar[] = {0.05,0.05,0.05,0.05};
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        position[] = {0,0,0};
        positionVar[] = {0,0,0};
    };
    class GVAR(lingeringDust): GVAR(impactDust) {
        interval = 0.1;
        lifeTime = "2+(intensity*5)";
        lifeTimeVar = "1+(intensity*2)";
        rubbing = 2;
        size[] = {".05+(intensity*.2)","2+(intensity*2.5)","3.5+(intensity*3.5)","4+(intensity*4)"};
        sizeCoef = 1;
        sizeVar = 0.2;
        color[] = {{0.85,0.73,0.67,0.15},{0.85,0.73,0.67,0.15},{0.85,0.73,0.67,0.13},{0.75,0.74,0.71,0.1},{0.75,0.74,0.71,0.08},{0.75,0.74,0.71,0}};
    };
    class GVAR(impactDustDirt): Default {
        interval = 0.5;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 9;
        particleFSLoop = 0;
        animationSpeed[] = {1000};
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = "intensity*2";
        lifeTimeVar = "intensity*0.5";
        moveVelocity[] = {0,"surfNormalY * (.5+(intensity*.5))",0};
        moveVelocityVar[] = {0,".1+(intensity*0.1)",0};
        rotationVelocity = 0;
        weight = "2*20";
        volume = "1*20";
        rubbing = 1;
        size[] = {"intensity*.4","intensity*4"};
        sizeVar = 0.3;
        color[] = {{0.35,0.23,0.07,1},{0.35,0.23,0.01,0}};
        colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor","intensity*5"};
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        positionVar[] = {0,0,0};
        rotationVelocityVar = 50;
        colorVar[] = {0,0,0,0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class GVAR(impactDustDust): Default {
        interval = 0.5;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 8;
        particleFSLoop = 1;
        animationSpeed[] = {2};
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 1;
        lifeTime = "0.6";
        lifeTimeVar = "0.1";
        moveVelocity[] = {0,0,0};
        rotationVelocity = 0;
        weight = "1.275*20";
        volume = "1*20";
        rubbing = 0.5;
        size[] = {".2","intensity*3"};
        sizeVar = 0.2;
        color[] = {{0.55,0.43,0.27,1},{0.55,0.43,0.27,0.9},{0.65,0.53,0.37,0.1},{0.65,0.53,0.37,0}};
        colorCoef[] = {"1 + 0.02 * dustColor","1 - 0.08 * dustColor","1 - 0.34 * dustColor",1};
        randomDirectionPeriod = 0;
        randomDirectionIntensity = 0;
        onTimerScript = "";
        beforeDestroyScript = "";
        positionVar[] = {0,0,0};
        MoveVelocityVar[] = {0,0,0};
        rotationVelocityVar = 1;
        colorVar[] = {0,0,0,0};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class GVAR(impactDust_Red): GVAR(impactDust) {
        color[] = {{0.4,0.275,0.15,"(0.3 * dustness) + 0.05"},{0.6,0.42,0.25,"(0.21 * dustness) + 0.035"},{0.65,0.47,0.3,"(0.1 * dustness) + 0.016"},{0.65,0.47,0.3,"(0.036 * dustness) + 0.006"},{0.65,0.47,0.3,0}};
    };
    class GVAR(lingeringDust_Red): GVAR(lingeringDust) {
        color[] = {{0.4,0.275,0.15,"(0.3 * dustness) + 0.05"},{0.6,0.42,0.25,"(0.21 * dustness) + 0.035"},{0.65,0.47,0.3,"(0.1 * dustness) + 0.016"},{0.65,0.47,0.3,"(0.036 * dustness) + 0.006"},{0.65,0.47,0.3,0}};
    };
    class GVAR(impactDustDust_Red): GVAR(impactDustDust) {
        color[] = {{0.4,0.275,0.15,"(0.3 * dustness) + 0.05"},{0.6,0.42,0.25,"(0.21 * dustness) + 0.035"},{0.65,0.47,0.3,"(0.1 * dustness) + 0.016"},{0.65,0.47,0.3,"(0.036 * dustness) + 0.006"},{0.65,0.47,0.3,0}};
    };
    class GVAR(impactDustDirt_Red): GVAR(impactDustDirt) {
        color[] = {{0.4,0.275,0.15,"(0.3 * dustness) + 0.05"},{0.6,0.42,0.25,"(0.21 * dustness) + 0.035"},{0.65,0.47,0.3,"(0.1 * dustness) + 0.016"},{0.65,0.47,0.3,"(0.036 * dustness) + 0.006"},{0.65,0.47,0.3,0}};
    };
    class GVAR(impactDustGlass1): Default {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0,0,0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        particleFSNtieth = 16;
        particleFSIndex = 12;
        particleFSFrameCount = 8;
        particleFSLoop = 0;
        angleVar = 1;
        animationName = "";
        particleType = "Billboard";
        timerPeriod = 3;
        lifeTime = 0.6;
        lifeTimeVar = 0.2;
        moveVelocity[] = {"(surfNormalX / 2) * inSpeed / 350 * 0.66","(surfNormalY / 2) * inSpeed / 350 * 0.66","(surfNormalZ / 2) * inSpeed / 350 * 0.66"};
        moveVelocityVar[] = {0.2,0.2,0.2};
        rotationVelocity = 1;
        weight = 1.3;
        volume = 1;
        rubbing = 0.1;
        size[] = {0.1,0.6};
        sizeCoef = 1;
        color[] = {{0.2,0.2,0.25,1},{0.6,0.6,0.7,0.1},{0.6,0.6,0.7,0.08},{0.6,0.6,0.7,0.06},{0.7,0.7,0.8,0}};
        colorCoef[] = {1,1,1,1};
        animationSpeed[] = {1};
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.05;
        onTimerScript = "";
        beforeDestroyScript = "";
        position[] = {0,0,0};
        positionVar[] = {0,0,0};
        rotationVelocityVar = 0;
        sizeVar = 0.5;
        colorVar[] = {0.05,0.05,0.05,0.2};
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
    class GVAR(impactDustGlass2): GVAR(impactDustGlass1) {
        moveVelocity[] = {"-((surfNormalX / 2) * inSpeed / 350 * 0.66)","-((surfNormalY / 2) * inSpeed / 350 * 0.66)","-((surfNormalZ / 2) * inSpeed / 350 * 0.66)"};
    };
    class GVAR(impactDustWoodOut): ImpactDustWood {
        moveVelocity[] = {"-((surfNormalX / 2) * inSpeed / 350 * 0.66)","-((surfNormalY / 2) * inSpeed / 350 * 0.66)","-((surfNormalZ / 2) * inSpeed / 350 * 0.66)"};
    };
    class GVAR(woodChippingsOut1): WoodChippings1 {
        moveVelocity[] = {"-((- inDirX * 2 + surfNormalX / 2) * inSpeed / 350 * 0.66)","-(( - inDirY * 2 + surfNormalY / 2) * inSpeed / 350 * 0.66)","-(( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 350 * 0.66)"};
    };
    class GVAR(woodChippingsOut2): WoodChippings2 {
        moveVelocity[] = {"-((outDirX * 2) * outSpeed / 250 * 0.66)","-((outDirY * 2) * outSpeed / 250 * 0.66)","-((outDirZ * 2) * outSpeed / 250 * 0.66)"};
    };
};
