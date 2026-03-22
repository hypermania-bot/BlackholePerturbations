#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_350(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[350] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[350] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((846)*(expr[1]))+(((-7310)*(expr[2]))+(((21504)*(expr[3]))+(((-25785)*(expr[4]))+((10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_351(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[351] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[351] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-846)*(expr[1]))+(((7310)*(expr[2]))+(((-21504)*(expr[3]))+(((25785)*(expr[4]))+((-10890)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_352(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[352] = ((0.00781250000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-68)*((a)*((M)*(r))))+(((-1142.30769230769230769230769231)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((11)*(pow(a,3)))+((a)*((r)*(((1670)*(M))+((11)*(r)))))))+(((12)*(((91)*(pow(a,3)))+((a)*((r)*(((842)*(M))+((91)*(r)))))))+(((-2)*(((113)*(pow(a,3)))+((a)*((r)*(((2698)*(M))+((113)*(r)))))))+(((8.18181818181818181818181818182)*(((355)*(pow(a,3)))+((a)*((r)*(((-226)*(M))+((355)*(r)))))))+((-1.33333333333333333333333333333)*(((1991)*(pow(a,3)))+((a)*((r)*(((4613)*(M))+((1991)*(r))))))))))))));
} else {
coeffs[352] = ((0.00781250000000000000000000000000)*((11.9582607431013980211298407562)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-846)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((7310)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-21504)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((25785)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-10890)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-34)*((a)*((M)*((r)*(expr[0])))))+(((((11)*(pow(a,3)))+((a)*((r)*(((1670)*(M))+((11)*(r))))))*(expr[1]))+(((-5)*((((113)*(pow(a,3)))+((a)*((r)*(((2698)*(M))+((113)*(r))))))*(expr[2])))+(((42)*((((91)*(pow(a,3)))+((a)*((r)*(((842)*(M))+((91)*(r))))))*(expr[3])))+(((-6)*((((1991)*(pow(a,3)))+((a)*((r)*(((4613)*(M))+((1991)*(r))))))*(expr[4])))+(((45)*((((355)*(pow(a,3)))+((a)*((r)*(((-226)*(M))+((355)*(r))))))*(expr[5])))+((-7425)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_353(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[353] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[353] = ((0.0234375000000000000000000000000)*((8.77496438739212206040638830742)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-28)*(expr[1]))+(((70)*(expr[2]))+(((-28)*(expr[3]))+((-15)*(expr[4])))))));
}
}

void compute_coeffs_scalar_354(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[354] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[354] = ((0.0234375000000000000000000000000)*((15.1986841535706636316687442060)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-70)*(expr[2]))+(((140)*(expr[3]))+((-81)*(expr[4])))))));
}
}

void compute_coeffs_scalar_355(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[355] = ((0.128906250000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(7.75757575757575757575757575758));
} else {
coeffs[355] = ((0.128906250000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((83)*(expr[1]))+(((-350)*(expr[2]))+(((350)*(expr[3]))+(((141)*(expr[4]))+((-225)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_356(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[356] = ((0.515625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-5.75757575757575757575757575758)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*(r))))+(((24.5454545454545454545454545455)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((-31.3333333333333333333333333333)*(((8)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((8)*(r)))))))+(((0.666666666666666666666666666667)*(((20)*(pow(a,3)))+((a)*((r)*(((209)*(M))+((20)*(r)))))))+(((-2.40000000000000000000000000000)*(((36)*(pow(a,3)))+((a)*((r)*(((103)*(M))+((36)*(r)))))))+((4)*(((56)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((56)*(r))))))))))))));
} else {
coeffs[356] = ((0.515625000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-83)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-350)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-141)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((225)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((3)*((a)*((M)*((r)*(expr[0])))))+(((((20)*(pow(a,3)))+((a)*((r)*(((209)*(M))+((20)*(r))))))*(expr[1]))+(((-6)*((((36)*(pow(a,3)))+((a)*((r)*(((103)*(M))+((36)*(r))))))*(expr[2])))+(((14)*((((56)*(pow(a,3)))+((a)*((r)*(((-37)*(M))+((56)*(r))))))*(expr[3])))+(((-141)*((((8)*(pow(a,3)))+((a)*((r)*(((-19)*(M))+((8)*(r))))))*(expr[4])))+((135)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_357(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[357] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[357] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-179)*(expr[1]))+(((1310)*(expr[2]))+(((-3654)*(expr[3]))+(((4335)*(expr[4]))+((-1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_358(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[358] = ((0.0117187500000000000000000000000)*((14.6458185158768098125730190558)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[358] = ((0.0117187500000000000000000000000)*((14.6458185158768098125730190558)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((3)*(expr[0]))+(((-179)*(expr[1]))+(((1310)*(expr[2]))+(((-3654)*(expr[3]))+(((4335)*(expr[4]))+((-1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_359(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[359] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[359] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((179)*(expr[1]))+(((-1310)*(expr[2]))+(((3654)*(expr[3]))+(((-4335)*(expr[4]))+((1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_360(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[360] = ((0.0234375000000000000000000000000)*((14.6458185158768098125730190558)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((18)*((a)*((M)*(r))))+(((126.923076923076923076923076923)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((19)*(pow(a,3)))+((a)*((r)*(((-575)*(M))+((19)*(r)))))))+(((-2)*(((54)*(pow(a,3)))+((a)*((r)*(((-1553)*(M))+((54)*(r)))))))+(((-2)*(((71)*(pow(a,3)))+((a)*((r)*(((-928)*(M))+((71)*(r)))))))+(((4)*(((73)*(pow(a,3)))+((a)*((r)*(((-929)*(M))+((73)*(r)))))))+((-0.909090909090909090909090909091)*(((205)*(pow(a,3)))+((a)*((r)*(((679)*(M))+((205)*(r))))))))))))));
} else {
coeffs[360] = ((0.0234375000000000000000000000000)*((14.6458185158768098125730190558)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((179)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1310)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((3654)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-4335)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((1815)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((9)*((a)*((M)*((r)*(expr[0])))))+(((((19)*(pow(a,3)))+((a)*((r)*(((-575)*(M))+((19)*(r))))))*(expr[1]))+(((-5)*((((71)*(pow(a,3)))+((a)*((r)*(((-928)*(M))+((71)*(r))))))*(expr[2])))+(((14)*((((73)*(pow(a,3)))+((a)*((r)*(((-929)*(M))+((73)*(r))))))*(expr[3])))+(((-9)*((((54)*(pow(a,3)))+((a)*((r)*(((-1553)*(M))+((54)*(r))))))*(expr[4])))+(((-5)*((((205)*(pow(a,3)))+((a)*((r)*(((679)*(M))+((205)*(r))))))*(expr[5])))+((825)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_361(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[361] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[361] = ((0.0468750000000000000000000000000)*((15.1986841535706636316687442060)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-28)*(expr[3]))+((18)*(expr[4]))))));
}
}

void compute_coeffs_scalar_362(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[362] = ((0.515625000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(3.87878787878787878787878787879));
} else {
coeffs[362] = ((0.515625000000000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((4)*(expr[0]))+(((-39)*(expr[1]))+(((140)*(expr[2]))+(((-154)*(expr[3]))+(((24)*(expr[4]))+((25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_363(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[363] = ((1.03125000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-3.87878787878787878787878787879)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((32)*((a)*((M)*(r))))+(((-1.60000000000000000000000000000)*((pow(a,3))+((a)*((r)*(((-142)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-41)*(M))+(r))))))+(((-8)*(((3)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((3)*(r)))))))+(((-3.63636363636363636363636363636)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+((0.888888888888888888888888888889)*(((41)*(pow(a,3)))+((a)*((r)*(((-58)*(M))+((41)*(r))))))))))))));
} else {
coeffs[363] = ((1.03125000000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((39)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((154)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-24)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-41)*(M))+(r)))))*(expr[1])))+(((-4)*(((pow(a,3))+((a)*((r)*(((-142)*(M))+(r)))))*(expr[2])))+(((-28)*((((3)*(pow(a,3)))+((a)*((r)*(((16)*(M))+((3)*(r))))))*(expr[3])))+(((4)*((((41)*(pow(a,3)))+((a)*((r)*(((-58)*(M))+((41)*(r))))))*(expr[4])))+((-20)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_364(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[364] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[364] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((5)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-29)*((M)*(pow(r,3))))+((14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-220)*(expr[2]))+(((896)*(expr[3]))+(((-1170)*(expr[4]))+((484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_365(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[365] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[365] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((12)*(expr[1]))+(((-220)*(expr[2]))+(((896)*(expr[3]))+(((-1170)*(expr[4]))+((484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_366(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[366] = ((0.00585937500000000000000000000000)*((18.9076704011890370163895545528)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[366] = ((0.00585937500000000000000000000000)*((18.9076704011890370163895545528)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((220)*(expr[2]))+(((-896)*(expr[3]))+(((1170)*(expr[4]))+((-484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_367(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[367] = ((0.0234375000000000000000000000000)*((18.9076704011890370163895545528)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((-41)*(pow(a,3)))+((a)*((((130)*(M))+((-41)*(r)))*(r)))))+(((0.181818181818181818181818181818)*(((-5)*(pow(a,3)))+((a)*((((1946)*(M))+((-5)*(r)))*(r)))))+(((0.222222222222222222222222222222)*(((758)*(pow(a,3)))+(((-6196)*((a)*((M)*(r))))+((758)*((a)*(pow(r,2)))))))+(((-25.3846153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-4)*(((63)*(pow(a,3)))+((a)*((r)*(((-382)*(M))+((63)*(r)))))))+((2)*(((67)*(pow(a,3)))+((a)*((r)*(((-310)*(M))+((67)*(r))))))))))))));
} else {
coeffs[367] = ((0.0234375000000000000000000000000)*((18.9076704011890370163895545528)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((220)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-896)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((1170)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-484)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*((r)*(expr[0])))))+(((((-41)*(pow(a,3)))+((a)*((((130)*(M))+((-41)*(r)))*(r))))*(expr[1]))+(((5)*((((67)*(pow(a,3)))+((a)*((r)*(((-310)*(M))+((67)*(r))))))*(expr[2])))+(((-14)*((((63)*(pow(a,3)))+((a)*((r)*(((-382)*(M))+((63)*(r))))))*(expr[3])))+(((((758)*(pow(a,3)))+(((-6196)*((a)*((M)*(r))))+((758)*((a)*(pow(r,2))))))*(expr[4]))+(((((-5)*(pow(a,3)))+((a)*((((1946)*(M))+((-5)*(r)))*(r))))*(expr[5]))+((-165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_368(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[368] = ((0.644531250000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.55151515151515151515151515152));
} else {
coeffs[368] = ((0.644531250000000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((3)*(expr[1]))+(((-14)*(expr[2]))+(((14)*(expr[3]))+(((-3)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_369(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[369] = ((2.57812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.448484848484848484848484848485)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((30)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-8)*(pow(a,3)))+((a)*(((M)+((-8)*(r)))*(r)))))+(((0.666666666666666666666666666667)*(((-4)*(pow(a,3)))+((a)*((((23)*(M))+((-4)*(r)))*(r)))))+(((0.400000000000000000000000000000)*(((8)*(pow(a,3)))+(((-86)*((a)*((M)*(r))))+((8)*((a)*(pow(r,2)))))))+((0.181818181818181818181818181818)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))))))));
} else {
coeffs[369] = ((2.57812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((5)*((a)*((M)*((r)*(expr[0])))))+(((((-4)*(pow(a,3)))+((a)*((((23)*(M))+((-4)*(r)))*(r))))*(expr[1]))+(((((8)*(pow(a,3)))+(((-86)*((a)*((M)*(r))))+((8)*((a)*(pow(r,2))))))*(expr[2]))+(((70)*((a)*((M)*((r)*(expr[3])))))+(((((-8)*(pow(a,3)))+((a)*(((M)+((-8)*(r)))*(r))))*(expr[4]))+((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[5])))))))));
}
}

void compute_coeffs_scalar_370(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[370] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[370] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-58)*((M)*(pow(r,3))))+((28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-10)*(expr[2]))+(((-14)*(expr[3]))+(((27)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_371(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[371] = ((0.644531250000000000000000000000)*((2.54950975679639241501411205451)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[371] = ((0.644531250000000000000000000000)*((2.54950975679639241501411205451)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((9)*(expr[1]))+(((-10)*(expr[2]))+(((-14)*(expr[3]))+(((27)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_372(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[372] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[372] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((14)*(expr[3]))+(((-27)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_373(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[373] = ((1.28906250000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((-34)*(pow(a,3)))+((a)*((((203)*(M))+((-34)*(r)))*(r)))))+(((0.909090909090909090909090909091)*((pow(a,3))+((a)*((r)*(((-13)*(M))+(r))))))+(((0.461538461538461538461538461538)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((43)*(M))+(r))))))+(((4)*(((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r)))))))+((-0.400000000000000000000000000000)*((a)*(((17)*(pow(a,2)))+((r)*(((16)*(M))+((17)*(r))))))))))))));
} else {
coeffs[373] = ((1.28906250000000000000000000000)*((2.54950975679639241501411205451)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((14)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-27)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-5)*((a)*((M)*((r)*(expr[0])))))+((((pow(a,3))+((a)*((r)*(((43)*(M))+(r)))))*(expr[1]))+(((-1)*((a)*((((17)*(pow(a,2)))+((r)*(((16)*(M))+((17)*(r)))))*(expr[2]))))+(((14)*((((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))*(expr[3])))+(((((-34)*(pow(a,3)))+((a)*((((203)*(M))+((-34)*(r)))*(r))))*(expr[4]))+(((5)*(((pow(a,3))+((a)*((r)*(((-13)*(M))+(r)))))*(expr[5])))+((3)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_374(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[374] = ((1.57104492187500000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.27303807303807303807303807304));
} else {
coeffs[374] = ((1.57104492187500000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((pow(a,2))*(pow(r,2)))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((2)*(expr[1]))+(((-17)*(expr[2]))+(((28)*(expr[3]))+(((-17)*(expr[4]))+(((2)*(expr[5]))+(expr[6]))))))));
}
}

void compute_coeffs_scalar_375(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[375] = ((1.57104492187500000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(1.27303807303807303807303807304));
} else {
coeffs[375] = ((1.57104492187500000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((2)*(expr[1]))+(((-17)*(expr[2]))+(((28)*(expr[3]))+(((-17)*(expr[4]))+(((2)*(expr[5]))+(expr[6]))))))));
}
}

void compute_coeffs_scalar_376(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[376] = ((0.785522460937500000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.27303807303807303807303807304));
} else {
coeffs[376] = ((0.785522460937500000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-2)*(expr[1]))+(((17)*(expr[2]))+(((-28)*(expr[3]))+(((17)*(expr[4]))+(((-2)*(expr[5]))+((-1)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_377(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[377] = ((3.14208984375000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2.15384615384615384615384615385)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.880808080808080808080808080808)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((2.28571428571428571428571428571)*((pow(a,3))+((a)*((r)*(((-23)*(M))+(r))))))+(((2.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((-2.18181818181818181818181818182)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((-2.40000000000000000000000000000)*(((2)*(pow(a,3)))+((a)*((r)*(((-21)*(M))+((2)*(r)))))))+(((0.153846153846153846153846153846)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((2)*(r))))))))+((0.222222222222222222222222222222)*(((8)*(pow(a,3)))+((2)*((a)*((r)*(((43)*(M))+((4)*(r))))))))))))))));
} else {
coeffs[377] = ((3.14208984375000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-28)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((17)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[6]))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((4)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[1])))+(((-6)*((((2)*(pow(a,3)))+((a)*((r)*(((-21)*(M))+((2)*(r))))))*(expr[2])))+(((8)*(((pow(a,3))+((a)*((r)*(((-23)*(M))+(r)))))*(expr[3])))+(((((8)*(pow(a,3)))+((2)*((a)*((r)*(((43)*(M))+((4)*(r)))))))*(expr[4]))+(((-12)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[5])))+((((4)*(pow(a,3)))+((2)*((a)*((r)*(((-7)*(M))+((2)*(r)))))))*(expr[6]))))))))));
}
}

void compute_coeffs_scalar_378(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[378] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[378] = ((0.322265625000000000000000000000)*((2.54950975679639241501411205451)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((14)*(expr[3]))+(((-27)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_379(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[379] = ((1.04736328125000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.954778554778554778554778554779));
} else {
coeffs[379] = ((1.04736328125000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((13)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(20.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-20.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((61)*(expr[2]))+(((-112)*(expr[3]))+(((75)*(expr[4]))+(((-4)*(expr[5]))+((-9)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_380(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[380] = ((2.09472656250000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(0.954778554778554778554778554779));
} else {
coeffs[380] = ((2.09472656250000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((61)*(expr[2]))+(((-112)*(expr[3]))+(((75)*(expr[4]))+(((-4)*(expr[5]))+((-9)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_381(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[381] = ((1.04736328125000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.954778554778554778554778554779));
} else {
coeffs[381] = ((1.04736328125000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-61)*(expr[2]))+(((112)*(expr[3]))+(((-75)*(expr[4]))+(((4)*(expr[5]))+((9)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_382(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[382] = ((4.18945312500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((1.04522144522144522144522144522)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*(r))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-32)*(M))+(r))))))+(((2)*(((2)*(pow(a,3)))+((a)*((r)*(((-65)*(M))+((2)*(r)))))))+(((-2.30769230769230769230769230769)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((1.14285714285714285714285714286)*(((3)*(pow(a,3)))+((a)*((r)*(((134)*(M))+((3)*(r)))))))+(((0.181818181818181818181818181818)*(((86)*(pow(a,3)))+((2)*((a)*((r)*(((-76)*(M))+((43)*(r))))))))+((-0.222222222222222222222222222222)*((a)*(((76)*(pow(a,2)))+((r)*(((223)*(M))+((76)*(r)))))))))))))));
} else {
coeffs[382] = ((4.18945312500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((12)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-61)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((112)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-75)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-5)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((-32)*(M))+(r)))))*(expr[1])))+(((5)*((((2)*(pow(a,3)))+((a)*((r)*(((-65)*(M))+((2)*(r))))))*(expr[2])))+(((4)*((((3)*(pow(a,3)))+((a)*((r)*(((134)*(M))+((3)*(r))))))*(expr[3])))+(((-1)*((a)*((((76)*(pow(a,2)))+((r)*(((223)*(M))+((76)*(r)))))*(expr[4]))))+(((((86)*(pow(a,3)))+((2)*((a)*((r)*(((-76)*(M))+((43)*(r)))))))*(expr[5]))+((-15)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_383(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[383] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[383] = ((0.0117187500000000000000000000000)*((26.1247009552262626468971346971)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-51)*(expr[1]))+(((210)*(expr[2]))+(((-238)*(expr[3]))+(((45)*(expr[4]))+((33)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_384(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[384] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[384] = ((0.0117187500000000000000000000000)*((18.9076704011890370163895545528)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-12)*(expr[1]))+(((220)*(expr[2]))+(((-896)*(expr[3]))+(((1170)*(expr[4]))+((-484)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_385(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[385] = ((0.0952148437500000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(21.0051282051282051282051282051));
} else {
coeffs[385] = ((0.0952148437500000000000000000000)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((11)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(8.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-8.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((378)*(expr[1]))+(((-2353)*(expr[2]))+(((4844)*(expr[3]))+(((-3057)*(expr[4]))+(((-902)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_386(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[386] = ((0.0952148437500000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(21.0051282051282051282051282051));
} else {
coeffs[386] = ((0.0952148437500000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((378)*(expr[1]))+(((-2353)*(expr[2]))+(((4844)*(expr[3]))+(((-3057)*(expr[4]))+(((-902)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_387(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[387] = ((0.0476074218750000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-21.0051282051282051282051282051));
} else {
coeffs[387] = ((0.0476074218750000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-378)*(expr[1]))+(((2353)*(expr[2]))+(((-4844)*(expr[3]))+(((3057)*(expr[4]))+(((902)*(expr[5]))+((-1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_388(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[388] = ((0.190429687500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((2)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((-19.0051282051282051282051282051)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((223.384615384615384615384615385)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((-5.33333333333333333333333333333)*(((5)*(pow(a,3)))+((a)*((r)*(((179)*(M))+((5)*(r)))))))+(((-16)*(((91)*(pow(a,3)))+((a)*((r)*(((-223)*(M))+((91)*(r)))))))+(((0.400000000000000000000000000000)*(((568)*(pow(a,3)))+((4)*((a)*((r)*(((2069)*(M))+((142)*(r))))))))+(((-4.57142857142857142857142857143)*(((201)*(pow(a,3)))+((a)*((r)*(((809)*(M))+((201)*(r)))))))+((0.222222222222222222222222222222)*(((7792)*(pow(a,3)))+((4)*((a)*((r)*(((-839)*(M))+((1948)*(r))))))))))))))));
} else {
coeffs[388] = ((0.190429687500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[0]))+(((-378)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((2353)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-4844)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((3057)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((902)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((-8)*((((5)*(pow(a,3)))+((a)*((r)*(((179)*(M))+((5)*(r))))))*(expr[1])))+(((((568)*(pow(a,3)))+((4)*((a)*((r)*(((2069)*(M))+((142)*(r)))))))*(expr[2]))+(((-16)*((((201)*(pow(a,3)))+((a)*((r)*(((809)*(M))+((201)*(r))))))*(expr[3])))+(((((7792)*(pow(a,3)))+((4)*((a)*((r)*(((-839)*(M))+((1948)*(r)))))))*(expr[4]))+(((-88)*((((91)*(pow(a,3)))+((a)*((r)*(((-223)*(M))+((91)*(r))))))*(expr[5])))+((1452)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_389(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[389] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[389] = ((0.0117187500000000000000000000000)*((11.6833214455479226106621848926)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((20)*(expr[1]))+(((70)*(expr[2]))+(((-252)*(expr[3]))+((165)*(expr[4])))))));
}
}

void compute_coeffs_scalar_390(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[390] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[390] = ((0.0351562500000000000000000000000)*((6.74536878161602073277515280575)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((54)*(expr[1]))+(((-210)*(expr[2]))+(((224)*(expr[3]))+(((45)*(expr[4]))+((-110)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_391(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[391] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[391] = ((0.00585937500000000000000000000000)*((14.6458185158768098125730190558)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-3)*(expr[0]))+(((179)*(expr[1]))+(((-1310)*(expr[2]))+(((3654)*(expr[3]))+(((-4335)*(expr[4]))+((1815)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_392(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[392] = ((0.0571289062500000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(17.5042735042735042735042735043));
} else {
coeffs[392] = ((0.0571289062500000000000000000000)*(((-2)*(pow(a,4)))+(((2)*((pow(a,2))*((M)*(r))))+(((29)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(12.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-12.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((-82)*((M)*(pow(r,3))))+((40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((9)*(expr[0]))+(((-140)*(expr[1]))+(((1125)*(expr[2]))+(((-1904)*(expr[3]))+(((-1565)*(expr[4]))+(((5500)*(expr[5]))+((-3025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_393(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[393] = ((0.114257812500000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(17.5042735042735042735042735043));
} else {
coeffs[393] = ((0.114257812500000000000000000000)*((r)*((pow(a,4))+(((-1)*((pow(a,2))*(pow(r,2))))+(((2)*((M)*(pow(r,3))))+((-2)*(pow(r,4)))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((9)*(expr[0]))+(((-140)*(expr[1]))+(((1125)*(expr[2]))+(((-1904)*(expr[3]))+(((-1565)*(expr[4]))+(((5500)*(expr[5]))+((-3025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_394(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[394] = ((0.0571289062500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-17.5042735042735042735042735043));
} else {
coeffs[394] = ((0.0571289062500000000000000000000)*((pow(r,2))*(pow((pow(a,2))+(pow(r,2)),2)))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-9)*(expr[0]))+(((140)*(expr[1]))+(((-1125)*(expr[2]))+(((1904)*(expr[3]))+(((1565)*(expr[4]))+(((-5500)*(expr[5]))+((3025)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_395(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[395] = ((0.228515625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((-17.5042735042735042735042735043)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-54)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((6964)*(pow(a,3)))+(((-8216)*((a)*((M)*(r))))+((6964)*((a)*(pow(r,2)))))))+(((-465.384615384615384615384615385)*(((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r)))))))+(((0.666666666666666666666666666667)*(((66)*(pow(a,3)))+((6)*((a)*((r)*(((48)*(M))+((11)*(r))))))))+(((60)*(((49)*(pow(a,3)))+((a)*((r)*(((-148)*(M))+((49)*(r)))))))+(((-6)*(((86)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((86)*(r)))))))+((-1.11111111111111111111111111111)*(((3172)*(pow(a,3)))+((a)*((r)*(((-7283)*(M))+((3172)*(r)))))))))))))));
} else {
coeffs[395] = ((0.228515625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((140)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-1125)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((1904)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((1565)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-5500)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((3025)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-27)*((a)*((M)*((r)*(expr[0])))))+(((((66)*(pow(a,3)))+((6)*((a)*((r)*(((48)*(M))+((11)*(r)))))))*(expr[1]))+(((-15)*((((86)*(pow(a,3)))+((a)*((r)*(((53)*(M))+((86)*(r))))))*(expr[2])))+(((((6964)*(pow(a,3)))+(((-8216)*((a)*((M)*(r))))+((6964)*((a)*(pow(r,2))))))*(expr[3]))+(((-5)*((((3172)*(pow(a,3)))+((a)*((r)*(((-7283)*(M))+((3172)*(r))))))*(expr[4])))+(((330)*((((49)*(pow(a,3)))+((a)*((r)*(((-148)*(M))+((49)*(r))))))*(expr[5])))+((-3025)*((((2)*(pow(a,3)))+((a)*((r)*(((-7)*(M))+((2)*(r))))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_396(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[396] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[396] = ((0.00390625000000000000000000000000)*((8.06225774829854965236661323030)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((420)*(expr[1]))+(((-1190)*(expr[2]))+(((420)*(expr[3]))+((495)*(expr[4])))))));
}
}

void compute_coeffs_scalar_397(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[397] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[397] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-34)*(expr[0]))+(((720)*(expr[1]))+(((-3220)*(expr[2]))+(((5376)*(expr[3]))+((-2970)*(expr[4])))))));
}
}

void compute_coeffs_scalar_398(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[398] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[398] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-17)*(expr[0]))+(((21)*(expr[1]))+(((-210)*(expr[2]))+(((2674)*(expr[3]))+(((-5805)*(expr[4]))+((3465)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_399(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[399] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[399] = ((0.00390625000000000000000000000000)*((11.9582607431013980211298407562)*(((-1)*(pow(a,4)))+(((pow(a,2))*((M)*(r)))+(((17)*((pow(a,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((2)*((pow(M,2))*(pow(r,2))))+(((std::complex(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((-41)*((M)*(pow(r,3))))+((20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((17)*(expr[0]))+(((-846)*(expr[1]))+(((7310)*(expr[2]))+(((-21504)*(expr[3]))+(((25785)*(expr[4]))+((-10890)*(expr[5]))))))));
}
}

}
