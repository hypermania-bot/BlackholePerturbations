#include "../teukolsky.hpp"

namespace Teukolsky {

void compute_coeffs_scalar_1500(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1500] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1500] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((47)*(expr[1]))+(((-370)*(expr[2]))+(((966)*(expr[3]))+(((-1005)*(expr[4]))+((363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1501(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1501] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((12)*((a)*((M)*(r))))+(((50.7692307692307692307692307692)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-1.33333333333333333333333333333)*(((2)*(pow(a,3)))+((a)*((r)*(((137)*(M))+((2)*(r)))))))+(((12)*(((3)*(pow(a,3)))+((a)*((r)*(((68)*(M))+((3)*(r)))))))+(((-8)*(((16)*(pow(a,3)))+((a)*((r)*(((175)*(M))+((16)*(r)))))))+(((4)*(((54)*(pow(a,3)))+((a)*((r)*(((227)*(M))+((54)*(r)))))))+((-0.363636363636363636363636363636)*(((470)*(pow(a,3)))+((a)*((r)*(((149)*(M))+((470)*(r))))))))))))));
} else {
coeffs[1501] = ((0.00585937500000000000000000000000)*((122.535709081067466600401626023)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-47)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((370)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-966)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((1005)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-363)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((6)*((a)*((M)*((r)*(expr[0])))))+(((-2)*((((2)*(pow(a,3)))+((a)*((r)*(((137)*(M))+((2)*(r))))))*(expr[1])))+(((30)*((((3)*(pow(a,3)))+((a)*((r)*(((68)*(M))+((3)*(r))))))*(expr[2])))+(((-28)*((((16)*(pow(a,3)))+((a)*((r)*(((175)*(M))+((16)*(r))))))*(expr[3])))+(((18)*((((54)*(pow(a,3)))+((a)*((r)*(((227)*(M))+((54)*(r))))))*(expr[4])))+(((-2)*((((470)*(pow(a,3)))+((a)*((r)*(((149)*(M))+((470)*(r))))))*(expr[5])))+((330)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1502(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1502] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1502] = ((0.328125000000000000000000000000)*((4.06201920231798018022994178413)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((12)*(expr[1]))+(((-30)*(expr[2]))+(((28)*(expr[3]))+((-9)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1503(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1503] = ((0.902343750000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.21645021645021645021645021645));
} else {
coeffs[1503] = ((0.902343750000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-3)*(expr[1]))+(((-10)*(expr[2]))+(((58)*(expr[3]))+(((-69)*(expr[4]))+((25)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1504(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1504] = ((0.902343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((2.21645021645021645021645021645)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((16)*((a)*((M)*(r))))+(((7.27272727272727272727272727273)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((5.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*((M)+(r))))))+(((-6.40000000000000000000000000000)*(((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r)))))))+(((4.57142857142857142857142857143)*(((9)*(pow(a,3)))+((a)*((r)*(((-47)*(M))+((9)*(r)))))))+((-1.77777777777777777777777777778)*(((16)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((16)*(r))))))))))))));
} else {
coeffs[1504] = ((0.902343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-58)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((8)*((a)*((M)*((r)*(expr[0])))))+(((8)*(((pow(a,3))+((a)*((r)*((M)+(r)))))*(expr[1])))+(((-16)*((((4)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((4)*(r))))))*(expr[2])))+(((16)*((((9)*(pow(a,3)))+((a)*((r)*(((-47)*(M))+((9)*(r))))))*(expr[3])))+(((-8)*((((16)*(pow(a,3)))+((a)*((r)*(((-101)*(M))+((16)*(r))))))*(expr[4])))+((40)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1505(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1505] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1505] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-5)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((26)*((M)*(pow(r,3))))+((-14)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-90)*(expr[1]))+(((500)*(expr[2]))+(((-980)*(expr[3]))+(((810)*(expr[4]))+((-242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1506(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1506] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1506] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-90)*(expr[1]))+(((500)*(expr[2]))+(((-980)*(expr[3]))+(((810)*(expr[4]))+((-242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1507(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1507] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-32)*((a)*((M)*(r))))+(((-25.3846153846153846153846153846)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((3.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((142)*(M))+(r))))))+(((-10)*((pow(a,3))+((a)*((r)*(((158)*(M))+(r))))))+(((20)*(((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r)))))))+(((-2.22222222222222222222222222222)*(((53)*(pow(a,3)))+((a)*((r)*(((542)*(M))+((53)*(r)))))))+((0.181818181818181818181818181818)*(((505)*(pow(a,3)))+((a)*((r)*(((926)*(M))+((505)*(r))))))))))))));
} else {
coeffs[1507] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((-2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((90)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-500)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((980)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-810)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((242)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((-16)*((a)*((M)*((r)*(expr[0])))))+(((5)*(((pow(a,3))+((a)*((r)*(((142)*(M))+(r)))))*(expr[1])))+(((-25)*(((pow(a,3))+((a)*((r)*(((158)*(M))+(r)))))*(expr[2])))+(((70)*((((3)*(pow(a,3)))+((a)*((r)*(((106)*(M))+((3)*(r))))))*(expr[3])))+(((-10)*((((53)*(pow(a,3)))+((a)*((r)*(((542)*(M))+((53)*(r))))))*(expr[4])))+(((((505)*(pow(a,3)))+((a)*((r)*(((926)*(M))+((505)*(r))))))*(expr[5]))+((-165)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1508(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1508] = ((1.12792968750000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.886580086580086580086580086580));
} else {
coeffs[1508] = ((1.12792968750000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((3)*(expr[1]))+(((-2)*(expr[2]))+(((-2)*(expr[3]))+(((3)*(expr[4]))+((-1)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1509(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1509] = ((2.25585937500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((0.886580086580086580086580086580)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((20)*((a)*((M)*(r))))+(((0.222222222222222222222222222222)*(((8)*(pow(a,3)))+(((-46)*((a)*((M)*(r))))+((8)*((a)*(pow(r,2)))))))+(((-0.363636363636363636363636363636)*((pow(a,3))+((a)*((r)*(((-7)*(M))+(r))))))+(((-1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((13)*(M))+(r))))))+(((0.400000000000000000000000000000)*(((8)*(pow(a,3)))+((4)*((a)*((r)*((M)+((2)*(r))))))))+((-1.14285714285714285714285714286)*(((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))))))))));
} else {
coeffs[1509] = ((2.25585937500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-3)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((-2)*(((pow(a,3))+((a)*((r)*(((13)*(M))+(r)))))*(expr[1])))+(((((8)*(pow(a,3)))+((4)*((a)*((r)*((M)+((2)*(r)))))))*(expr[2]))+(((-4)*((((3)*(pow(a,3)))+((a)*((r)*(((-11)*(M))+((3)*(r))))))*(expr[3])))+(((((8)*(pow(a,3)))+(((-46)*((a)*((M)*(r))))+((8)*((a)*(pow(r,2))))))*(expr[4]))+((-2)*(((pow(a,3))+((a)*((r)*(((-7)*(M))+(r)))))*(expr[5]))))))))));
}
}

void compute_coeffs_scalar_1510(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1510] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1510] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((52)*((M)*(pow(r,3))))+((-28)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-50)*(expr[2]))+(((70)*(expr[3]))+(((-45)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1511(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1511] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1511] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((15)*(expr[1]))+(((-50)*(expr[2]))+(((70)*(expr[3]))+(((-45)*(expr[4]))+((11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1512(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1512] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * (std::complex<double>(0.0,1.0)*(((-180)*((a)*((M)*(r))))+(((-4)*((pow(a,3))+((a)*((r)*(((-52)*(M))+(r))))))+(((0.923076923076923076923076923077)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((4)*(pow(a,3)))+((2)*((a)*((r)*(((-79)*(M))+((2)*(r))))))))+(((-1.81818181818181818181818181818)*(((2)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((2)*(r)))))))+((2.22222222222222222222222222222)*(((2)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((2)*(r)))))))))))));
} else {
coeffs[1512] = ((0.0644531250000000000000000000000)*((21.3307290077015417508863915213)*(pow(r,2)))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-15)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((50)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((45)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+((-11)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5]))))))))+std::complex<double>(0.0,1.0)*(((10)*((a)*((M)*((r)*(expr[0])))))+(((((4)*(pow(a,3)))+((2)*((a)*((r)*(((-79)*(M))+((2)*(r)))))))*(expr[1]))+(((-10)*(((pow(a,3))+((a)*((r)*(((-52)*(M))+(r)))))*(expr[2])))+(((-700)*((a)*((M)*((r)*(expr[3])))))+(((10)*((((2)*(pow(a,3)))+((a)*((r)*(((41)*(M))+((2)*(r))))))*(expr[4])))+(((-10)*((((2)*(pow(a,3)))+((a)*((r)*(((7)*(M))+((2)*(r))))))*(expr[5])))+((6)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[6]))))))))))));
}
}

void compute_coeffs_scalar_1513(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1513] = ((2.51367187500000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.795648795648795648795648795649));
} else {
coeffs[1513] = ((2.51367187500000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-1)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((-5)*(expr[2]))+(((5)*(expr[4]))+(((-4)*(expr[5]))+(expr[6])))))));
}
}

void compute_coeffs_scalar_1514(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1514] = ((2.51367187500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.795648795648795648795648795649));
} else {
coeffs[1514] = ((2.51367187500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((4)*(expr[1]))+(((-5)*(expr[2]))+(((5)*(expr[4]))+(((-4)*(expr[5]))+(expr[6])))))));
}
}

void compute_coeffs_scalar_1515(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1515] = ((2.51367187500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((0.153846153846153846153846153846)*(((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r))))))+((0.949494949494949494949494949495)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))))+std::complex<double>(0.0,1.0)*(((-24)*((a)*((M)*(r))))+(((-0.307692307692307692307692307692)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-4.44444444444444444444444444444)*((pow(a,3))+((a)*((r)*(((-5)*(M))+(r))))))+(((5.71428571428571428571428571429)*((a)*((pow(a,2))+((r)*(((-2)*(M))+(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((4)*(M))+(r))))))+(((1.33333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((22)*(M))+(r))))))+((0.363636363636363636363636363636)*(((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r)))))))))))))));
} else {
coeffs[1515] = ((2.51367187500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-5)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((((((3)*(M))+((-1)*(r)))*(pow(r,2)))+((-1)*((pow(a,2))*((M)+(r)))))*(expr[6])))))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*((r)*(expr[0])))))+(((2)*(((pow(a,3))+((a)*((r)*(((22)*(M))+(r)))))*(expr[1])))+(((-10)*(((pow(a,3))+((a)*((r)*(((4)*(M))+(r)))))*(expr[2])))+(((20)*((a)*(((pow(a,2))+((r)*(((-2)*(M))+(r))))*(expr[3]))))+(((-20)*(((pow(a,3))+((a)*((r)*(((-5)*(M))+(r)))))*(expr[4])))+(((2)*((((5)*(pow(a,3)))+((a)*((r)*(((-34)*(M))+((5)*(r))))))*(expr[5])))+((-2)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1516(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1516] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1516] = ((0.0322265625000000000000000000000)*((21.3307290077015417508863915213)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-15)*(expr[1]))+(((50)*(expr[2]))+(((-70)*(expr[3]))+(((45)*(expr[4]))+((-11)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1517(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1517] = ((0.418945312500000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.38694638694638694638694638695));
} else {
coeffs[1517] = ((0.418945312500000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-13)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(10.0000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-10.0000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((70)*(expr[3]))+(((-165)*(expr[4]))+(((131)*(expr[5]))+((-36)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1518(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1518] = ((0.837890625000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-2.38694638694638694638694638695));
} else {
coeffs[1518] = ((0.837890625000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-9)*(expr[1]))+(((10)*(expr[2]))+(((70)*(expr[3]))+(((-165)*(expr[4]))+(((131)*(expr[5]))+((-36)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1519(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1519] = ((0.837890625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((2.38694638694638694638694638695)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-20)*((a)*((M)*(r))))+(((9.23076923076923076923076923077)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((40)*((pow(a,3))+((a)*((r)*(((-1)*(M))+(r))))))+(((-6.66666666666666666666666666667)*((pow(a,3))+((a)*((r)*(((7)*(M))+(r))))))+(((-28.5714285714285714285714285714)*(((3)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((3)*(r)))))))+(((11.1111111111111111111111111111)*(((8)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((8)*(r)))))))+((-1.81818181818181818181818181818)*(((25)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((25)*(r)))))))))))))));
} else {
coeffs[1519] = ((0.837890625000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((9)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-10)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-70)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((165)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-131)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((36)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-10)*((a)*((M)*((r)*(expr[0])))))+(((-10)*(((pow(a,3))+((a)*((r)*(((7)*(M))+(r)))))*(expr[1])))+(((100)*(((pow(a,3))+((a)*((r)*(((-1)*(M))+(r)))))*(expr[2])))+(((-100)*((((3)*(pow(a,3)))+((a)*((r)*(((-13)*(M))+((3)*(r))))))*(expr[3])))+(((50)*((((8)*(pow(a,3)))+((a)*((r)*(((-49)*(M))+((8)*(r))))))*(expr[4])))+(((-10)*((((25)*(pow(a,3)))+((a)*((r)*(((-181)*(M))+((25)*(r))))))*(expr[5])))+((60)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1520(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1520] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1520] = ((0.0468750000000000000000000000000)*((11.6833214455479226106621848926)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((2)*(expr[0]))+(((-15)*(expr[1]))+(((70)*(expr[3]))+(((-90)*(expr[4]))+((33)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1521(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1521] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1521] = ((0.0117187500000000000000000000000)*((31.6385840391127491431062915848)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-2)*(expr[0]))+(((90)*(expr[1]))+(((-500)*(expr[2]))+(((980)*(expr[3]))+(((-810)*(expr[4]))+((242)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1522(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1522] = ((0.152343750000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-13.1282051282051282051282051282));
} else {
coeffs[1522] = ((0.152343750000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-11)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(4.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-4.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((-69)*(expr[1]))+(((605)*(expr[2]))+(((-2450)*(expr[3]))+(((4470)*(expr[4]))+(((-3641)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1523(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1523] = ((0.152343750000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-13.1282051282051282051282051282));
} else {
coeffs[1523] = ((0.152343750000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-4)*(expr[0]))+(((-69)*(expr[1]))+(((605)*(expr[2]))+(((-2450)*(expr[3]))+(((4470)*(expr[4]))+(((-3641)*(expr[5]))+((1089)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1524(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1524] = ((0.152343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((13.1282051282051282051282051282)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-64)*((a)*((M)*(r))))+(((0.666666666666666666666666666667)*(((52)*(pow(a,3)))+(((-656)*((a)*((M)*(r))))+((52)*((a)*(pow(r,2)))))))+(((-223.384615384615384615384615385)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((-8)*(((43)*(pow(a,3)))+((a)*((r)*(((-328)*(M))+((43)*(r)))))))+(((11.4285714285714285714285714286)*(((93)*(pow(a,3)))+((a)*((r)*(((-676)*(M))+((93)*(r)))))))+(((8)*(((115)*(pow(a,3)))+((a)*((r)*(((-892)*(M))+((115)*(r)))))))+((-8.88888888888888888888888888889)*(((163)*(pow(a,3)))+((a)*((r)*(((-1220)*(M))+((163)*(r)))))))))))))));
} else {
coeffs[1524] = ((0.152343750000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((4)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((69)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-605)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((2450)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-4470)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((3641)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-1089)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-32)*((a)*((M)*((r)*(expr[0])))))+(((((52)*(pow(a,3)))+(((-656)*((a)*((M)*(r))))+((52)*((a)*(pow(r,2))))))*(expr[1]))+(((-20)*((((43)*(pow(a,3)))+((a)*((r)*(((-328)*(M))+((43)*(r))))))*(expr[2])))+(((40)*((((93)*(pow(a,3)))+((a)*((r)*(((-676)*(M))+((93)*(r))))))*(expr[3])))+(((-40)*((((163)*(pow(a,3)))+((a)*((r)*(((-1220)*(M))+((163)*(r))))))*(expr[4])))+(((44)*((((115)*(pow(a,3)))+((a)*((r)*(((-892)*(M))+((115)*(r))))))*(expr[5])))+((-1452)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1525(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1525] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-29)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1525] = ((0.0585937500000000000000000000000)*((11.6833214455479226106621848926)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-29)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((20)*(expr[1]))+(((-70)*(expr[2]))+(((84)*(expr[3]))+((-33)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1526(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1526] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-29)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1526] = ((0.0351562500000000000000000000000)*((15.0831031289983560862583822123)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-29)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-12)*(expr[1]))+(((70)*(expr[2]))+(((-196)*(expr[3]))+(((225)*(expr[4]))+((-88)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1527(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1527] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-29)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1527] = ((0.00292968750000000000000000000000)*((122.535709081067466600401626023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-29)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-47)*(expr[1]))+(((370)*(expr[2]))+(((-966)*(expr[3]))+(((1005)*(expr[4]))+((-363)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1528(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1528] = ((0.571289062500000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-29)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.75042735042735042735042735043));
} else {
coeffs[1528] = ((0.571289062500000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-29)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(6.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-6.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((23)*(expr[1]))+(((-246)*(expr[2]))+(((966)*(expr[3]))+(((-1765)*(expr[4]))+(((1507)*(expr[5]))+((-484)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1529(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1529] = ((1.14257812500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-1.75042735042735042735042735043));
} else {
coeffs[1529] = ((1.14257812500000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((23)*(expr[1]))+(((-246)*(expr[2]))+(((966)*(expr[3]))+(((-1765)*(expr[4]))+(((1507)*(expr[5]))+((-484)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1530(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1530] = ((1.14257812500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((1.75042735042735042735042735043)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-12)*((a)*((M)*(r))))+(((0.285714285714285714285714285714)*(((-692)*(pow(a,3)))+((4)*((a)*((((1795)*(M))+((-173)*(r)))*(r))))))+(((-4)*((pow(a,3))+((a)*((r)*(((-25)*(M))+(r))))))+(((74.4615384615384615384615384615)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((1.60000000000000000000000000000)*(((31)*(pow(a,3)))+((a)*((r)*(((-431)*(M))+((31)*(r)))))))+(((-4)*(((65)*(pow(a,3)))+((a)*((r)*(((-541)*(M))+((65)*(r)))))))+((2.22222222222222222222222222222)*(((152)*(pow(a,3)))+((a)*((r)*(((-1363)*(M))+((152)*(r)))))))))))))));
} else {
coeffs[1530] = ((1.14257812500000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((-23)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((246)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-966)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((1765)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-1507)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((484)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-6)*((a)*((M)*((r)*(expr[0])))))+(((-6)*(((pow(a,3))+((a)*((r)*(((-25)*(M))+(r)))))*(expr[1])))+(((4)*((((31)*(pow(a,3)))+((a)*((r)*(((-431)*(M))+((31)*(r))))))*(expr[2])))+(((((-692)*(pow(a,3)))+((4)*((a)*((((1795)*(M))+((-173)*(r)))*(r)))))*(expr[3]))+(((10)*((((152)*(pow(a,3)))+((a)*((r)*(((-1363)*(M))+((152)*(r))))))*(expr[4])))+(((-22)*((((65)*(pow(a,3)))+((a)*((r)*(((-541)*(M))+((65)*(r))))))*(expr[5])))+((484)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1531(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1531] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1531] = ((0.156250000000000000000000000000)*((2.54950975679639241501411205451)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((70)*(expr[2]))+(((-168)*(expr[3]))+((99)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1532(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1532] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1532] = ((0.0390625000000000000000000000000)*((9.53939201416945649152621586023)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((-60)*(expr[1]))+(((350)*(expr[2]))+(((-588)*(expr[3]))+((297)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1533(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1533] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1533] = ((0.0234375000000000000000000000000)*((8.06225774829854965236661323030)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*((expr[0])+(((126)*(expr[1]))+(((-1050)*(expr[2]))+(((2912)*(expr[3]))+(((-3375)*(expr[4]))+((1386)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1534(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1534] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1534] = ((0.00781250000000000000000000000000)*((50.0249937531230482411629143850)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((69)*(expr[1]))+(((-650)*(expr[2]))+(((2058)*(expr[3]))+(((-2565)*(expr[4]))+((1089)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1535(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1535] = ((0.126953125000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-15.7538461538461538461538461538));
} else {
coeffs[1535] = ((0.126953125000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-17)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((4)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-324)*(expr[1]))+(((3811)*(expr[2]))+(((-16464)*(expr[3]))+(((32085)*(expr[4]))+(((-28908)*(expr[5]))+((9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1536(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1536] = ((0.126953125000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-15.7538461538461538461538461538));
} else {
coeffs[1536] = ((0.126953125000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-1)*(expr[0]))+(((-324)*(expr[1]))+(((3811)*(expr[2]))+(((-16464)*(expr[3]))+(((32085)*(expr[4]))+(((-28908)*(expr[5]))+((9801)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1537(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1537] = ((0.126953125000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((15.7538461538461538461538461538)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-8)*((a)*((M)*(r))))+(((-1005.23076923076923076923076923)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((0.666666666666666666666666666667)*(((38)*(pow(a,3)))+((2)*((a)*((r)*(((-686)*(M))+((19)*(r))))))))+(((36)*(((85)*(pow(a,3)))+((a)*((r)*(((-754)*(M))+((85)*(r)))))))+(((-13.3333333333333333333333333333)*(((257)*(pow(a,3)))+((a)*((r)*(((-2653)*(M))+((257)*(r)))))))+(((-0.800000000000000000000000000000)*((a)*(((463)*(pow(a,2)))+((r)*(((-8548)*(M))+((463)*(r)))))))+((3.42857142857142857142857142857)*(((501)*(pow(a,3)))+((a)*((r)*(((-6490)*(M))+((501)*(r)))))))))))))));
} else {
coeffs[1537] = ((0.126953125000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0]))+(((324)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((-3811)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((16464)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((-32085)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((28908)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((-9801)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-4)*((a)*((M)*((r)*(expr[0])))))+(((((38)*(pow(a,3)))+((2)*((a)*((r)*(((-686)*(M))+((19)*(r)))))))*(expr[1]))+(((-2)*((a)*((((463)*(pow(a,2)))+((r)*(((-8548)*(M))+((463)*(r)))))*(expr[2]))))+(((12)*((((501)*(pow(a,3)))+((a)*((r)*(((-6490)*(M))+((501)*(r))))))*(expr[3])))+(((-60)*((((257)*(pow(a,3)))+((a)*((r)*(((-2653)*(M))+((257)*(r))))))*(expr[4])))+(((198)*((((85)*(pow(a,3)))+((a)*((r)*(((-754)*(M))+((85)*(r))))))*(expr[5])))+((-6534)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1538(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1538] = ((0.0156250000000000000000000000000)*((6.24499799839839820584689312094)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1538] = ((0.0156250000000000000000000000000)*((6.24499799839839820584689312094)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-105)*(expr[1]))+(((315)*(expr[2]))+((-231)*(expr[3]))))));
}
}

void compute_coeffs_scalar_1539(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1539] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1539] = ((0.0156250000000000000000000000000)*((8.06225774829854965236661323030)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((105)*(expr[1]))+(((-455)*(expr[2]))+(((735)*(expr[3]))+((-396)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1540(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1540] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1540] = ((0.00390625000000000000000000000000)*((9.53939201416945649152621586023)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[0]))+(((180)*(expr[1]))+(((-1190)*(expr[2]))+(((2436)*(expr[3]))+((-1485)*(expr[4])))))));
}
}

void compute_coeffs_scalar_1541(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1541] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1541] = ((0.0117187500000000000000000000000)*((3.60555127546398929311922126747)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[0]))+(((-420)*(expr[1]))+(((3570)*(expr[2]))+(((-10780)*(expr[3]))+(((13095)*(expr[4]))+((-5544)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1542(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1542] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1542] = ((0.00195312500000000000000000000000)*((11.9582607431013980211298407562)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4)))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((5)*(expr[0]))+(((-315)*(expr[1]))+(((3290)*(expr[2]))+(((-11550)*(expr[3]))+(((16065)*(expr[4]))+((-7623)*(expr[5]))))))));
}
}

void compute_coeffs_scalar_1543(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1543] = ((0.0253906250000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-39.3846153846153846153846153846));
} else {
coeffs[1543] = ((0.0253906250000000000000000000000)*(((2)*(pow(a,4)))+(((-8)*((pow(a,2))*((M)*(r))))+(((-37)*((pow(a,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(2.00000000000000000000000000000)))*((a)*((M)*(pow(r,2)))))+(((8)*((pow(M,2))*(pow(r,2))))+(((std::complex<double>(static_cast<double>(0),static_cast<double>(-2.00000000000000000000000000000)))*((a)*(pow(r,3))))+(((76)*((M)*(pow(r,3))))+((-40)*(pow(r,4))))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[0]))+(((975)*(expr[1]))+(((-12550)*(expr[2]))+(((57750)*(expr[3]))+(((-118845)*(expr[4]))+(((111771)*(expr[5]))+((-39204)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1544(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1544] = ((0.0507812500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-39.3846153846153846153846153846));
} else {
coeffs[1544] = ((0.0507812500000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[0]))+(((975)*(expr[1]))+(((-12550)*(expr[2]))+(((57750)*(expr[3]))+(((-118845)*(expr[4]))+(((111771)*(expr[5]))+((-39204)*(expr[6])))))))));
}
}

void compute_coeffs_scalar_1545(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1545] = ((0.0507812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*((39.3846153846153846153846153846)*(((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r)))))+std::complex<double>(0.0,1.0)*(((-100)*((a)*((M)*(r))))+(((-33.3333333333333333333333333333)*((pow(a,3))+((a)*((r)*(((-41)*(M))+(r))))))+(((2010.46153846153846153846153846)*((pow(a,3))+((a)*((r)*(((-8)*(M))+(r))))))+(((40)*(((13)*(pow(a,3)))+((a)*((r)*(((-277)*(M))+((13)*(r)))))))+(((-17.1428571428571428571428571429)*(((153)*(pow(a,3)))+((a)*((r)*(((-2231)*(M))+((153)*(r)))))))+(((-36)*(((155)*(pow(a,3)))+((a)*((r)*(((-1439)*(M))+((155)*(r)))))))+((6.66666666666666666666666666667)*(((856)*(pow(a,3)))+((a)*((r)*(((-9635)*(M))+((856)*(r)))))))))))))));
} else {
coeffs[1545] = ((0.0507812500000000000000000000000)*(pow(r,2))) / (denom_constant) * ((std::complex<double>(1.0,0.0)*(((25)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[0])))+(((-975)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[1])))+(((12550)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[2])))+(((-57750)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[3])))+(((118845)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[4])))+(((-111771)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[5])))+((39204)*((((pow(r,2))*(((-3)*(M))+(r)))+((pow(a,2))*((M)+(r))))*(expr[6])))))))))+std::complex<double>(0.0,1.0)*(((-50)*((a)*((M)*((r)*(expr[0])))))+(((-50)*(((pow(a,3))+((a)*((r)*(((-41)*(M))+(r)))))*(expr[1])))+(((100)*((((13)*(pow(a,3)))+((a)*((r)*(((-277)*(M))+((13)*(r))))))*(expr[2])))+(((-60)*((((153)*(pow(a,3)))+((a)*((r)*(((-2231)*(M))+((153)*(r))))))*(expr[3])))+(((30)*((((856)*(pow(a,3)))+((a)*((r)*(((-9635)*(M))+((856)*(r))))))*(expr[4])))+(((-198)*((((155)*(pow(a,3)))+((a)*((r)*(((-1439)*(M))+((155)*(r))))))*(expr[5])))+((13068)*(((pow(a,3))+((a)*((r)*(((-8)*(M))+(r)))))*(expr[6])))))))))));
}
}

void compute_coeffs_scalar_1546(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1546] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1546] = ((0.187500000000000000000000000000)*((21.3307290077015417508863915213)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-5)*(expr[1]))+(((35)*(expr[2]))+(((-63)*(expr[3]))+((33)*(expr[4]))))));
}
}

void compute_coeffs_scalar_1547(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1547] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(0.0,0.0));
} else {
coeffs[1547] = ((0.0937500000000000000000000000000)*((26.1247009552262626468971346971)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4)))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((15)*(expr[1]))+(((-140)*(expr[2]))+(((434)*(expr[3]))+(((-540)*(expr[4]))+((231)*(expr[5])))))));
}
}

void compute_coeffs_scalar_1548(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1548] = ((2.13281250000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.937728937728937728937728937729));
} else {
coeffs[1548] = ((2.13281250000000000000000000000)*((pow(a,4))+(((-4)*((pow(a,2))*((M)*(r))))+(((-19)*((pow(a,2))*(pow(r,2))))+(((4)*((pow(M,2))*(pow(r,2))))+(((38)*((M)*(pow(r,3))))+((-20)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[1]))+(((325)*(expr[2]))+(((-1530)*(expr[3]))+(((3210)*(expr[4]))+(((-3069)*(expr[5]))+((1089)*(expr[6]))))))));
}
}

void compute_coeffs_scalar_1549(const Scalar a, const Scalar M, const Vector &r, const Vector &denom_constant, const std::vector<Vector> &expr, std::vector<ComplexVector> &coeffs) {
if(a == 0){
coeffs[1549] = ((2.13281250000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(-0.937728937728937728937728937729));
} else {
coeffs[1549] = ((2.13281250000000000000000000000)*((r)*(((-1)*(pow(a,4)))+(((3)*((pow(a,2))*((M)*(r))))+(((-2)*((pow(a,2))*(pow(r,2))))+(((M)*(pow(r,3)))+((-1)*(pow(r,4))))))))) / (denom_constant) * (std::complex<double>(1.0,0.0)*(((-25)*(expr[1]))+(((325)*(expr[2]))+(((-1530)*(expr[3]))+(((3210)*(expr[4]))+(((-3069)*(expr[5]))+((1089)*(expr[6]))))))));
}
}

}
