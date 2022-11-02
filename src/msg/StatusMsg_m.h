//
// Generated file, do not edit! Created by opp_msgtool 6.0 from msg/StatusMsg.msg.
//

#ifndef __STATUSMSG_M_H
#define __STATUSMSG_M_H

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#include <omnetpp.h>

// opp_msgtool version check
#define MSGC_VERSION 0x0600
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgtool: 'make clean' should help.
#endif

class StatusMsg;
/**
 * Class generated from <tt>msg/StatusMsg.msg:1</tt> by opp_msgtool.
 * <pre>
 * message StatusMsg
 * {
 *     int numUAV;
 *     double x;
 *     double y;
 *     double z;
 * }
 * </pre>
 */
class StatusMsg : public ::omnetpp::cMessage
{
  protected:
    int numUAV = 0;
    double x = 0;
    double y = 0;
    double z = 0;

  private:
    void copy(const StatusMsg& other);

  protected:
    bool operator==(const StatusMsg&) = delete;

  public:
    StatusMsg(const char *name=nullptr, short kind=0);
    StatusMsg(const StatusMsg& other);
    virtual ~StatusMsg();
    StatusMsg& operator=(const StatusMsg& other);
    virtual StatusMsg *dup() const override {return new StatusMsg(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    virtual int getNumUAV() const;
    virtual void setNumUAV(int numUAV);

    virtual double getX() const;
    virtual void setX(double x);

    virtual double getY() const;
    virtual void setY(double y);

    virtual double getZ() const;
    virtual void setZ(double z);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const StatusMsg& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, StatusMsg& obj) {obj.parsimUnpack(b);}


namespace omnetpp {

template<> inline StatusMsg *fromAnyPtr(any_ptr ptr) { return check_and_cast<StatusMsg*>(ptr.get<cObject>()); }

}  // namespace omnetpp

#endif // ifndef __STATUSMSG_M_H

