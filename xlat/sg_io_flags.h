/* Generated by ./xlat/gen.sh from ./xlat/sg_io_flags.in; do not edit. */
#if !(defined(SG_FLAG_DIRECT_IO) || (defined(HAVE_DECL_SG_FLAG_DIRECT_IO) && HAVE_DECL_SG_FLAG_DIRECT_IO))
# define SG_FLAG_DIRECT_IO 1
#endif
#if !(defined(SG_FLAG_UNUSED_LUN_INHIBIT) || (defined(HAVE_DECL_SG_FLAG_UNUSED_LUN_INHIBIT) && HAVE_DECL_SG_FLAG_UNUSED_LUN_INHIBIT))
# define SG_FLAG_UNUSED_LUN_INHIBIT 2
#endif
#if !(defined(SG_FLAG_MMAP_IO) || (defined(HAVE_DECL_SG_FLAG_MMAP_IO) && HAVE_DECL_SG_FLAG_MMAP_IO))
# define SG_FLAG_MMAP_IO 4
#endif
#if !(defined(SG_FLAG_NO_DXFER) || (defined(HAVE_DECL_SG_FLAG_NO_DXFER) && HAVE_DECL_SG_FLAG_NO_DXFER))
# define SG_FLAG_NO_DXFER 0x10000
#endif
#if !(defined(SG_FLAG_Q_AT_TAIL) || (defined(HAVE_DECL_SG_FLAG_Q_AT_TAIL) && HAVE_DECL_SG_FLAG_Q_AT_TAIL))
# define SG_FLAG_Q_AT_TAIL 0x10
#endif
#if !(defined(SG_FLAG_Q_AT_HEAD) || (defined(HAVE_DECL_SG_FLAG_Q_AT_HEAD) && HAVE_DECL_SG_FLAG_Q_AT_HEAD))
# define SG_FLAG_Q_AT_HEAD 0x20
#endif

#ifdef IN_MPERS

extern const struct xlat sg_io_flags[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat sg_io_flags[] = {
 XLAT(SG_FLAG_DIRECT_IO),
 XLAT(SG_FLAG_UNUSED_LUN_INHIBIT),
 XLAT(SG_FLAG_MMAP_IO),
 XLAT(SG_FLAG_NO_DXFER),
 XLAT(SG_FLAG_Q_AT_TAIL),
 XLAT(SG_FLAG_Q_AT_HEAD),
 XLAT_END
};

#endif /* !IN_MPERS */