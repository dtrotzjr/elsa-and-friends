// cc.in79
// problem with templatized forward decl?
// no, was a problem with templatized prototypes

class std::istream;

template<class TP> class smanip;
//template<class TP> class smanip {};

template<class TP>
inline std::istream& operator>>(std::istream& i, const smanip<TP>& m);
//int foo(smanip<TP> &m);

typedef smanip<int> smanip_int;

template<class TP> class smanip {
  smanip *whatever;
  smanip<TP> *whatever2;
};

void f()
{
  smanip_int s;
  s.whatever;
}

